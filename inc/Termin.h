#ifndef TERMIN_H
#define TERMIN_H

#include "Date.h"
#include "Lekarz.h"

class Termin
{
private:
	typedef enum
	{
		BADANIE,
		OPERACJA,
		KONSULTACJA
	} Typ_wizyty;

	Lekarz lekarz;
	Date data;

	int koszt;
	Typ_wizyty typ_wizyty;
	bool zarezerwowany;
	bool potwierdzony;

public:
	Date getData();

	void setKoszt(int koszt);

	void setTyp_wizyty(Typ_wizyty typ);

	void setZarezerwowany();

	bool getZarezerwowany();

	void setPotwierdzony();

	void setLekarz(Lekarz lek);
};

#endif
