#include "WynikWizyty.h"
#include<iostream>


void WynikWizyty::wyswietlWynik()
{
	cout << "Data wizyty: ";
	this->data.wyswietl_czas();
	cout << endl << "Przebieg wizyty: " << this->przebieg_wizyty << endl << "Zalecenia " << this->zalecenia << endl << "Skierowania: " << this->skierowania;
}
