#ifndef PACJENT_H
#define PACJENT_H

#include <vector>
#include "Uzytkownik.h"

class Termin;

class Pacjent : public Uzytkownik
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

	void zarezerwuj_termin(vector<Termin*> terminy);

	void usun_rezerwacje(vector<Termin*> terminy);
};

#endif
