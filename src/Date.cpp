#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

const int max_miesiac = 12;
const int max_dzien = 31;
const int max_godzina = 24;
const int max_minuta = 60;

Date::Date()
{
	int wybor;

	this->rok = 0;
	this->miesiac = 0;
	this->dzien = 0;
	this->godzina = 0;
	this->minuta = 0;

	cout << "Czy chcesz wprowadzic date? (1 - tak, 0 - nie)";

	while (1)
	{
		cin >> wybor;

		if (1 == wybor)
		{
			int temp;

			cout << "Podaj rok: ";
			cin >> temp;
			cout << endl;
			this->rok = temp;

			cout << "Podaj miesiac: ";
			cin >> temp;
			cout << endl;
			this->miesiac = temp;

			cout << "Podaj dzien: ";
			cin >> temp;
			cout << endl;
			this->dzien = temp;

			cout << "Podaj godzine: ";
			cin >> temp;
			cout << endl;
			this->godzina = temp;

			cout << "Podaj minute: ";
			cin >> temp;
			cout << endl;
			this->minuta = temp;

			this->wyswietl_czas();

			break;
		}
		else if (0 == wybor)
		{
			break;
		}
		else
		{
			cout << "Zly wybor, sprobuj ponownie (1 - tak, 0 - nie)" << endl;
		}
	}
}

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
