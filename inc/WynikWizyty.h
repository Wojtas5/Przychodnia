#ifndef WYNIKWIZYTY_H
#define WYNIKWIZYTY_H

#include <string>
#include "Date.h"

using namespace std;

class WynikWizyty
{
private:
	Date data;
	string przebieg_wizyty;
	string zalecenia;
	string skierowania;

public:
	void wyswietlWynik();
};

#endif
