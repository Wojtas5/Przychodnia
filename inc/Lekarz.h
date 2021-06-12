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

	void dodaj_wynik(Date data, string przebieg, string zalecenia, string skierowania);

	void czy_wolne(Date data);
};

#endif
