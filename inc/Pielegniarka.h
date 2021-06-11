#ifndef PIELEGNIARKA_H
#define PIELEGNIARKA_H

#include "Pracownik.h"
#include "Date.h"
#include <vector>
#include <Pacjent.h>

class Pielegniarka : public Pracownik
{
public:
	void usuniecie_pacjenta(int numer_pacjenta, vector<Pacjent*>& pacjenciVector);

	void dodaj_wolny_termin(Date data);
};

#endif
