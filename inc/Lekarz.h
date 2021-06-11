#ifndef LEKARZ_H
#define LEKARZ_H

#include <string>
#include "Pracownik.h"
#include "Termin.h"
#include "Date.h"

using namespace std;

typedef enum
{
	PULMONOLOG,
	UROLOG,
	KARDIOLOG,
	CHIRURG,
} Spec;

class Lekarz : public Pracownik
{
private:
	Spec specjalizacja;

public:
	void setSpecjalizacja(Spec specjalizacja);

	Spec getSpecjalizacja();

	bool potwierdz_rezerwacje(Termin ter);

	void dodaj_wynik(Termin ter, string przebieg, string zalecenia, string skierowania);

	void czy_wolne(Date data);
};

#endif
