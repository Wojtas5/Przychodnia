#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <string>

using namespace std;

class Uzytkownik
{
private:
	string login;
	string haslo;
	string imie;
	string nazwisko;
	string adres;
	string PESEL;
	string numer_telefonu;

public:
	void setHaslo();

	void setLogin();

	void zaloguj(string login, string haslo);

	void wyloguj();

	void setImie();

	void setNazwisko();

	void setAdres();

	void setPesel();

	void setNumer_telefonu();
};

#endif
