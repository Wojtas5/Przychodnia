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
	this->setLogin(temp);
	cout << "podaj haslo" << endl;
	cin >> temp;
	this->setHaslo(temp);
	cout << "podaj imie" << endl;
	cin >> temp;
	this->setImie(temp);
	cout << "podaj nazwisko" << endl;
	cin >> temp;
	this->setNazwisko(temp);
	cout << "podaj adres" << endl;
	cin >> temp;
	this->setAdres(temp);
	cout << "podaj pesel" << endl;
	cin >> temp;
	this->setPesel(temp);
	cout << "podaj numer telefonu" << endl;
	cin >> temp;
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
void Pacjent::zarezerwuj_termin(Termin termin)
{
	// TODO - implement Pacjent::zarezerwuj_termin
	throw "Not yet implemented";
}

void Pacjent::usun_rezerwacje(Termin termin)
{
	// TODO - implement Pacjent::usun_rezerwacje
	throw "Not yet implemented";
}
