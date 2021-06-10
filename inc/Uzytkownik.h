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
	bool zalogowany;

public:
	Uzytkownik();

	Uzytkownik(string login, string haslo, string imie, string nazwisko, string adres, string pesel, string numer);
	
	bool zaloguj(string login, string haslo);

	void wyloguj();

	void setHaslo(string haslo);

	void setLogin(string login);

	void setImie(string imie);

	void setNazwisko(string nazwisko);

	void setAdres(string adres);

	void setPesel(string pesel);

	void setNumer_telefonu(string numer);

	bool getZalogowany();
};

#endif
