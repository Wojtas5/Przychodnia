#include "Termin.h"

void Termin::setKoszt(int koszt)
{
	this->koszt = koszt;
}

void Termin::setTyp_wizyty(int typ)
{
	this->typ_wizyty = typ;
}

void Termin::setZarezerwowany(bool zarezerwowany)
{
	this->zarezerwowany = zarezerwowany;
}

void Termin::setLekarz(Lekarz lek)
{
	this->lekarz = lek;
}
