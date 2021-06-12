#include <iostream>
#include <string>
#include "Pielegniarka.h"
#include "Termin.h"
#include "Lekarz.h"

void Pielegniarka::usuniecie_pacjenta(int numer_pacjenta, vector<Pacjent*> &pacjenciVector)
{
	for (int i = 0; i < pacjenciVector.size(); i++)
	{
		if (pacjenciVector[i]->getNumerPacjenta() == numer_pacjenta) 
		{
			pacjenciVector.erase(pacjenciVector.begin()+i);
			break;
		}
	}
}

void Pielegniarka::dodaj_wolny_termin(vector<Termin*> &terminy, vector<Lekarz*> &lekarze)
{
	Termin* termin = new Termin;

	string temp;
	int tempInt;
	
	// Wyszukaj lekarza i dodaj do terminu
	cout << "Podaj specjalizacje: " << endl
		<< "(0 - Pulmonolog)" << endl
		<< "(1 - Urolog)" << endl
		<< "(2 - Kardiolog)" << endl
		<< "(3 - Chirurg)" << endl;

	cin >> tempInt;
	cin.clear();

	for (int i = 0; i < lekarze.size(); i++)
	{
		if (lekarze[i]->getSpecjalizacja() == static_cast<Spec>(tempInt))
		{
			termin->setLekarz(*lekarze[i]);
			break;
		}
	}
	
	Date tempData;
	termin->setData(tempData);

	cin >> tempInt;
	cin.clear();

	termin->setKoszt(tempInt);

	cout << "Podaj typ wizyty: " << endl
		<< "(0 - Badanie)" << endl
		<< "(1 - Operacja)" << endl
		<< "(2 - Konsultacja)" << endl;

	cin >> tempInt;
	cin.clear();

	termin->setTyp_wizyty(static_cast<Typ_wizyty>(tempInt));

	terminy.push_back(termin);
}
