#ifndef LEKARZ_H
#define LEKARZ_H

#include <string>
#include <vector>
#include "Pracownik.h"
#include "Date.h"

using namespace std;

class Termin;

typedef enum
{
	PULMONOLOG,
	UROLOG,
	KARDIOLOG,
	CHIRURG
} Spec;

class Lekarz : public Pracownik
{
private:
	Spec specjalizacja;

public:
	void setSpecjalizacja(Spec specjalizacja);

	Spec getSpecjalizacja();

	bool potwierdz_rezerwacje(vector<Termin*> terminy);

	void dodaj_wynik(vector<Termin*>& terminy);

	bool czy_wolne(Date data, vector<Termin*>& terminy);
};

#endif
