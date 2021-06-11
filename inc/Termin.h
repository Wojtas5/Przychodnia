#ifndef TERMIN_H
#define TERMIN_H

#include "Date.h"
#include "Lekarz.h"

class Termin
{
private:
	Lekarz lekarz;
	Date data;

	int koszt;
	int typ_wizyty;
	bool zarezerwowany;
	bool potwierdzony;

public:
	void setKoszt(int koszt);

	void setTyp_wizyty(int typ);

	void setZarezerwowany(bool zarezerwowany);

	void setLekarz(Lekarz lek);
};

#endif
