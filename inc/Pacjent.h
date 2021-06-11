#ifndef PACJENT_H
#define PACJENT_H

#include <Uzytkownik.h>
#include <Termin.h>

class Pacjent : Uzytkownik
{
private:
	int numer_pacjenta;
	static int licznik_pacjentow;
	bool zarejestrowany;

	void setZarejestrowany();
	void wygenerujNumer_pacjenta();


public:
	Pacjent::Pacjent();

	void rejestracja();

	int getNumerPacjenta();

	bool getZarejestrowany();

	void zarezerwuj_termin(Termin termin);

	void usun_rezerwacje(Termin termin);
};

#endif
