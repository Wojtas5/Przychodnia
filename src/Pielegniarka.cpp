#include <iostream>
#include <string>
#include <windows.h>
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

void Pielegniarka::dodaj_wolny_termin(vector<Termin*>& terminy, vector<Lekarz*>& lekarze)
{
	if (0 != lekarze.size())
	{
		string temp;
		int tempInt;
		bool lekarz_znaleziony = false;

		Termin* termin = new Termin;

		// Wyszukaj lekarza i dodaj do terminu
		while (!lekarz_znaleziony)
		{
			cout << "Podaj specjalizacje: " << endl
				<< "(0 - Pulmonolog)" << endl
				<< "(1 - Urolog)" << endl
				<< "(2 - Kardiolog)" << endl
				<< "(3 - Chirurg)" << endl;

			cin >> tempInt;

			// TODO Sprawdz ktorzy lekarze maja wolne uzywajac metody czy_wolne na lekarzu
			for (int i = 0; i < lekarze.size(); i++)
			{
				if (lekarze[i]->getSpecjalizacja() == static_cast<Spec>(tempInt))
				{
					termin->setLekarz(lekarze[i]);
					lekarz_znaleziony = true;
					break;
				}
			}

			cout << "Nie znaleziono lekarza! Try again" << endl;
		}

		// Stworz date i dodaj ja do terminu
		Date *tempData = new Date;
		termin->setData(tempData);
		
		// Ustaw koszt
		cin >> tempInt;
		termin->setKoszt(tempInt);

		// Ustaw typ wizyty
		while (1)
		{
			cout << "Podaj typ wizyty: " << endl
				<< "(0 - Badanie)" << endl
				<< "(1 - Operacja)" << endl
				<< "(2 - Konsultacja)" << endl;

			cin >> tempInt;

			if ((BADANIE == static_cast<Typ_wizyty>(tempInt))  ||
			    (OPERACJA == static_cast<Typ_wizyty>(tempInt)) ||
				(KONSULTACJA == static_cast<Typ_wizyty>(tempInt)))
			{
				termin->setTyp_wizyty(static_cast<Typ_wizyty>(tempInt));
				break;
			}
			else
			{
				cout << "Wybrano niepoprawny typ wizyty" << endl;
			}
		}
		
		terminy.push_back(termin);
	}
	else
	{
		cout << "Nie mozna stworzyc terminu poniewaz nie ma zadnych lekarzy!" << endl;
		Sleep(500);
	}
}
