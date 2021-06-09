#ifndef TERMIN_H
#define TERMIN_H

#include "Date.h"

class Termin
{
private:
	Date data;
	int koszt;
	int typ_wizyty;
	bool zarezerwowany;
	bool potwierdzony;

public:
	void setKoszt();

	void setTyp_wizyty();

	void setZarezerwowany();

	void setLekarz();
};

#endif
