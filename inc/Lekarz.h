#ifndef LEKARZ_H
#define LEKARZ_H

#include <string>
#include <Pracownik.h>
#include <Termin.h>

using namespace std;

class Lekarz : Pracownik
{
public:
	string specjalizacja;

	void potwierdz_rezerwacje(Termin ter);

	void dodaj_wynik(Date data, string przebieg, string zalecenia, string skierowania);

	void czy_wolne(Date data);
};

#endif
