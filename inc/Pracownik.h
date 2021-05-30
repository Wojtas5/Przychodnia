#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <Uzytkownik.h>

class Pracownik : Uzytkownik
{
private:
	int id_pracownika;
	static int licznik_pracownikow;
};

#endif
