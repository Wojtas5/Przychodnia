#include "WynikWizyty.h"
#include <iostream>

void WynikWizyty::wyswietlWynik()
{
	cout << "Data wizyty: ";

	this->data->wyswietl_czas();

	cout << endl << "Przebieg wizyty: " << this->przebieg_wizyty << endl << "Zalecenia " << 
		this->zalecenia << endl << "Skierowania: " << this->skierowania;
}

void WynikWizyty::setData(Date* data)
{
	this->data = data;
}

void WynikWizyty::setPrzebieg_wizyty(string przebieg)
{
	this->przebieg_wizyty = przebieg;
}

void WynikWizyty::setZalecenia(string zalecenia)
{
	this->zalecenia = zalecenia;
}

void WynikWizyty::setSkierowania(string skierowania)
{
	this->skierowania = skierowania;
}
