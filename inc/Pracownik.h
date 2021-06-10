#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <Uzytkownik.h>

class Pracownik : public Uzytkownik
{
private:
	int id_pracownika;
	static int licznik_pracownikow;

public:
	Pracownik::Pracownik();
};

#endif
