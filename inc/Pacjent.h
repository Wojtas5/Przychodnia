#ifndef PACJENT_H
#define PACJENT_H

#include <vector>
#include "WynikWizyty.h"
#include "Uzytkownik.h"

class Termin;

class Pacjent : public Uzytkownik
{
private:
	vector<WynikWizyty*> wyniki;

	int numer_pacjenta;
	static int licznik_pacjentow;
	bool zarejestrowany;

	void setZarejestrowany();
	void wygenerujNumer_pacjenta();

public:
	Pacjent::Pacjent();

	vector<WynikWizyty*> getWyniki();

	void wyswietlWyniki();

	void rejestracja();

	int getNumerPacjenta();

	bool getZarejestrowany();

	void zarezerwuj_termin(vector<Termin*> terminy);

	void usun_rezerwacje(vector<Termin*> terminy);
};

#endif
