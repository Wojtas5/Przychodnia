#include "Termin.h"
#include "Lekarz.h"
#include "Pacjent.h"

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

void Termin::setPacjent(Pacjent* pacjent)
{
	this->pacjent = *pacjent;
}

Pacjent Termin::getPacjent()
{
	return this->pacjent;
}

void Termin::setKoszt(int koszt)
{
	this->koszt = koszt;
}

void Termin::setTyp_wizyty(Typ_wizyty typ)
{
	this->typ_wizyty = typ;
}

void Termin::setZarezerwowany(bool zarez)
{
	this->zarezerwowany = zarez;
}

bool Termin::getZarezerwowany()
{
	return this->zarezerwowany;
}

void Termin::setPotwierdzony(bool potw)
{
	this->potwierdzony = potw;
}

bool Termin::getPotwierdzony()
{
	return this->potwierdzony;
}

void Termin::setLekarz(Lekarz lek)
{
	this->lekarz = lek;
}
