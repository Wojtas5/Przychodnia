#include "Administrator.h"
#include "Pielegniarka.h"
#include "Lekarz.h"
#include <iostream>

void Administrator::dodaj_pielegniarke(vector<Pielegniarka*>& vectorPielegniarki)
{
	Pielegniarka* pielegniarka= new Pielegniarka;
	string temp;

	cout << "podaj login" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setLogin(temp);

	cout << "podaj haslo" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setHaslo(temp);

	cout << "podaj imie" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setImie(temp);

	cout << "podaj nazwisko" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setNazwisko(temp);

	cout << "podaj adres" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setAdres(temp);

	cout << "podaj pesel" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setPesel(temp);

	cout << "podaj numer telefonu" << endl;
	cin >> temp;
	cin.clear();
	pielegniarka->setNumer_telefonu(temp);

	vectorPielegniarki.push_back(pielegniarka);
}

void Administrator::dodaj_lekarza(vector<Lekarz*>& vectorLekarze)
{
	Lekarz* lekarz = new Lekarz;
	string temp;
	int tempInt;

	cout << "podaj login" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setLogin(temp);

	cout << "podaj haslo" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setHaslo(temp);

	cout << "podaj imie" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setImie(temp);

	cout << "podaj nazwisko" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setNazwisko(temp);

	cout << "podaj adres" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setAdres(temp);

	cout << "podaj pesel" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setPesel(temp);

	cout << "podaj numer telefonu" << endl;
	cin >> temp;
	cin.clear();
	lekarz->setNumer_telefonu(temp);

	cout << "podaj specjalizacje" << endl;
	cin >> tempInt;
	cin.clear();
	lekarz->setSpecjalizacja(static_cast<Spec>(tempInt));

	vectorLekarze.push_back(lekarz);
}

void Administrator::usun_pracownika(int id_pracownika, vector<Lekarz*>& vectorLekarze, vector<Pielegniarka*>& vectorPielegniarki)
{
	for (int i = 0; i < vectorLekarze.size(); i++)
	{
		if (vectorLekarze[i]->getIdPracownika() == id_pracownika)
		{
			vectorLekarze.erase(vectorLekarze.begin() + i);
			break;
		}
	}

	for (int i = 0; i < vectorPielegniarki.size(); i++)
	{
		if (vectorPielegniarki[i]->getIdPracownika() == id_pracownika)
		{
			vectorPielegniarki.erase(vectorPielegniarki.begin() + i);
			break;
		}
	}
}
