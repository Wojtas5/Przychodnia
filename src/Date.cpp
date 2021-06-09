#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

const int max_miesiac = 12;
const int max_dzien = 31;
const int max_godzina = 24;
const int max_minuta = 60;

Date::Date(int r, int m, int d, int godz, int min)
{
	this->rok     =	r;
	this->miesiac = ((m > max_miesiac) ? max_miesiac : m);
	this->dzien	  =	((d > max_dzien) ? max_dzien : d);
	this->godzina = ((godz > max_godzina) ? max_godzina : godz);
	this->minuta  =	((min > max_minuta) ? max_minuta : min);
}

void Date::wyswietl_czas()
{
	string godz = to_string(godzina);
	string min = to_string(minuta);

	if (godzina <= 9)
	{ 
		godz = "0" + godz;
	}

	if (minuta <= 9)
	{
		min = "0" + min;
	}

	cout << "Data: " << dzien << "." << miesiac << "." << rok << " " << godz << ":" << min << endl;
}
