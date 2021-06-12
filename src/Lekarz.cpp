#include "Lekarz.h"
#include "Termin.h"

void Lekarz::setSpecjalizacja(Spec specjalizacja)
{
	this->specjalizacja = specjalizacja;
}

Spec Lekarz::getSpecjalizacja()
{
	return this->specjalizacja;
}

bool Lekarz::potwierdz_rezerwacje(Termin ter)
{
	// TODO - implement Lekarz::potwierdz_rezerwacje
	return false;
}

void Lekarz::dodaj_wynik(Date data, string przebieg, string zalecenia, string skierowania)
{
	// TODO - implement Lekarz::dodaj_wynik
	throw "Not yet implemented";
}

void Lekarz::czy_wolne(Date data)
{
	// TODO - implement Lekarz::czy_wolne
	throw "Not yet implemented";
}
