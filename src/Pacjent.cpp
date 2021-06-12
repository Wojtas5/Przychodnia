#include <iostream>
#include "Pacjent.h"
#include "Termin.h"

int Pacjent::licznik_pacjentow = 0;

Pacjent::Pacjent() : Uzytkownik()
{
	++(this->licznik_pacjentow);
}

void Pacjent::rejestracja()
{
	string temp;

	cout << "podaj login" << endl;
	cin >> temp;
	cin.clear();
	this->setLogin(temp);

	cout << "podaj haslo" << endl;
	cin >> temp;
	cin.clear();
	this->setHaslo(temp);

	cout << "podaj imie" << endl;
	cin >> temp;
	cin.clear();
	this->setImie(temp);

	cout << "podaj nazwisko" << endl;
	cin >> temp;
	cin.clear();
	this->setNazwisko(temp);

	cout << "podaj adres" << endl;
	cin >> temp;
	cin.clear();
	this->setAdres(temp);

	cout << "podaj pesel" << endl;
	cin >> temp;
	cin.clear();
	this->setPesel(temp);

	cout << "podaj numer telefonu" << endl;
	cin >> temp;
	cin.clear();
	this->setNumer_telefonu(temp);

	this->wygenerujNumer_pacjenta(); 
	this->setZarejestrowany();
}

void Pacjent::wygenerujNumer_pacjenta()
{
	this->numer_pacjenta = this->licznik_pacjentow;
}

void Pacjent::setZarejestrowany()
{
	this->zarejestrowany = true;
}

bool Pacjent::getZarejestrowany()
{
	return this->zarejestrowany;
}

int Pacjent::getNumerPacjenta()
{
	return this->numer_pacjenta;
}

void Pacjent::zarezerwuj_termin(vector<Termin*> terminy)
{
	if (0 != terminy.size())
	{
		int wybranyTermin = 0;

		cout << "Dostepne terminy:" << endl;

		for (int i = 0; i < terminy.size(); ++i)
		{
			cout << i << ". ";
			terminy[i]->getData().wyswietl_czas();
			cout << endl;
		}

		cout << "Wybierz termin: ";
		while (1)
		{
			cin >> wybranyTermin;

			if (0 != wybranyTermin)
			{
				terminy[wybranyTermin]->setPacjent(this);
				terminy[wybranyTermin]->setZarezerwowany(true);
				cout << "Wybrano: ";
				terminy[wybranyTermin]->getData().wyswietl_czas();
				break;
			}
			else
			{
				cout << "Wybrano zly termin, sprobuj ponownie";
			}
		}
	}
	else
	{
		cout << "Brak dostepnych wolnych terminow" << endl;
	}
}

void Pacjent::usun_rezerwacje(vector<Termin*> terminy)
{
	if (0 != terminy.size())
	{
		int wybranyTermin = 0;

		cout << "Terminy przypisane do tego pacjenta: " << endl;;

		for (int i = 0; i < terminy.size(); ++i)
		{
			if (&terminy[i]->getPacjent() == this)
			{
				cout << i << ". ";
				terminy[i]->getData().wyswietl_czas();
				cout << endl;
			}
		}

		cout << "Wybierz termin ktory chcesz usunac: ";
		while (1)
		{
			cin >> wybranyTermin;

			if (0 != wybranyTermin)
			{
				terminy[wybranyTermin]->setZarezerwowany(false);
				terminy[wybranyTermin]->setPotwierdzony(false);

				cout << "Usunieto rezerwacje z: ";
				terminy[wybranyTermin]->getData().wyswietl_czas();
				break;
			}
			else
			{
				cout << "Wybrano zly termin, sprobuj ponownie";
			}
		}
	}
	else
	{
		cout << "Brak dostepnych zarezerwowanych terminow terminow" << endl;
	}
}
