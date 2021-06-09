#ifndef PIELEGNIARKA_H
#define PIELEGNIARKA_H

#include "Pracownik.h"
#include "Date.h"

class Pielegniarka : public Pracownik
{
public:
	void usuniecie_pacjenta(int numer_pacjenta);

	void dodaj_wolny_termin(Date data);
};

#endif
