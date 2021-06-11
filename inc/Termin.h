#ifndef TERMIN_H
#define TERMIN_H

#include "Date.h"
#include "Lekarz.h"
#include "Pacjent.h"

typedef enum
{
	BADANIE,
	OPERACJA,
	KONSULTACJA
} Typ_wizyty;

class Termin
{
private:
	Lekarz lekarz;
	Pacjent pacjent;
	Date data;

	int koszt;
	Typ_wizyty typ_wizyty;
	bool zarezerwowany;
	bool potwierdzony;

public:
	Termin();

	void setData(Date data);

	Date getData();

	void setKoszt(int koszt);

	void setTyp_wizyty(Typ_wizyty typ);

	void setZarezerwowany();

	bool getZarezerwowany();

	void setPotwierdzony();

	void setLekarz(Lekarz lek);
};

#endif
