#include "pracownik.h"

Pracownik::Pracownik() 
{
	++licznik_pracownikow;
	this->id_pracownika = licznik_pracownikow;
}