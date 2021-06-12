#include <iostream>
#include "Uzytkownik.h"
#include <windows.h>

Uzytkownik::Uzytkownik()
{}

Uzytkownik::Uzytkownik(string login, string haslo, string imie, string nazwisko, 
					   string adres, string pesel, string numer)
{
	this->login = login;
	this->haslo = haslo;
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->adres = adres;
	this->PESEL = pesel;
	this->numer_telefonu = numer;
	this->zalogowany = false;
}

bool Uzytkownik::zaloguj(string login, string haslo)
{
	bool retval = false;

	if (this->login == login && this->haslo == haslo)
	{
		this->zalogowany = true;
		retval = true;

		cout << "Pomyslnie zalogowano " << imie << " " << nazwisko << endl;
		Sleep(300);
	}
	else if (this->login != login)
	{
		cout << "Wprowadzono bledny login " << login << " dla " << imie << " " << nazwisko << endl;
		Sleep(300);
	}
	else if (this->haslo != haslo)
	{
		cout << "Wprowadzono bledne haslo" << " dla " << imie << " " << nazwisko << endl;
		Sleep(300);
	}

	return retval;
}

void Uzytkownik::wyloguj()
{
	if (this->zalogowany == true)
	{
		this->zalogowany = false;

		cout << "Uzytkownik wylogowany pomyslnie" << endl;
		Sleep(300);
	}
	else
	{
		cout << "Uzytkownik nie jest zalogowany" << endl;
		Sleep(300);
	}
}

void Uzytkownik::setHaslo(string haslo)
{
	this->haslo = haslo;
}

void Uzytkownik::setLogin(string login)
{
	this->login = login;
}

void Uzytkownik::setImie(string imie)
{
	this->imie = imie;
}

void Uzytkownik::setNazwisko(string nazwisko)
{
	this->nazwisko = nazwisko;
}

void Uzytkownik::setAdres(string adres)
{
	this->adres = adres;
}

void Uzytkownik::setPesel(string pesel)
{
	this->PESEL = pesel;
}

void Uzytkownik::setNumer_telefonu(string numer)
{
	this->numer_telefonu = numer;
}

bool Uzytkownik::getZalogowany()
{
	return this->zalogowany;
}
