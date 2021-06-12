#ifndef TERMIN_H
#define TERMIN_H

#include "Date.h"
#include "Lekarz.h"
#include "Pacjent.h"

typedef enum
{
	BADANIE,
	OPERACJA,
	KONSULTACJA,
	BRAK
} Typ_wizyty;

class Termin
{
private:
	Lekarz *lekarz;
	Pacjent *pacjent;
	Date *data;

	int koszt;
	Typ_wizyty typ_wizyty;
	bool zarezerwowany;
	bool potwierdzony;

public:
	Termin()
	{
		this->data = nullptr;
		this->koszt = 0;
		this->typ_wizyty = BRAK;
		this->zarezerwowany = false;
		this->potwierdzony = false;
	}

	void setData(Date *data);

	Date *getData()
	{
		return this->data;
	}

	void setPacjent(Pacjent *pacjent);

	Pacjent *getPacjent();

	void setKoszt(int koszt);

	void setTyp_wizyty(Typ_wizyty typ);

	void setZarezerwowany(bool zarez);

	bool getZarezerwowany();

	void setPotwierdzony(bool potw);

	bool getPotwierdzony();

	void setLekarz(Lekarz *lekarz);

	Lekarz* getLekarz();
};

#endif
