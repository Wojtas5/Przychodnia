#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Uzytkownik.h"

class Administrator : Uzytkownik
{

public:
	void dodaj_pielegniarke();

	void dodaj_lekarza();

	void usun_pracownika(int id_pracownika);
};

#endif
