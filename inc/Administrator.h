#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Uzytkownik.h"
#include "Lekarz.h"
#include "Pielegniarka.h"
#include <vector>

class Administrator : public Uzytkownik
{

public:
	void dodaj_pielegniarke(vector<Pielegniarka*>& vectorPielegniarki);

	void dodaj_lekarza(vector<Lekarz*>& vectorLekarze);

	void usun_pracownika(int id_pracownika, vector<Lekarz*>& vectorLekarze, vector<Pielegniarka*>& vectorPielegniarki);
};

#endif
