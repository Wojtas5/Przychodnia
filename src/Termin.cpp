#include "Termin.h"

Termin::Termin()
{}

void Termin::setData(Date data)
{
	this->data = data;
}

Date Termin::getData()
{
	return this->data;
}

void Termin::setKoszt(int koszt)
{
	this->koszt = koszt;
}

void Termin::setTyp_wizyty(Typ_wizyty typ)
{
	this->typ_wizyty = typ;
}

void Termin::setZarezerwowany()
{
	this->zarezerwowany = true;
}

bool Termin::getZarezerwowany()
{
	return this->zarezerwowany;
}

void Termin::setPotwierdzony()
{
	this->potwierdzony = true;
}

void Termin::setLekarz(Lekarz lek)
{
	this->lekarz = lek;
}
