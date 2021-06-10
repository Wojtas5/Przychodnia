#include "Pracownik.h"

int Pracownik::licznik_pracownikow = 0;

Pracownik::Pracownik()
{
	++(this->licznik_pracownikow);
	this->id_pracownika = this->licznik_pracownikow;
}
