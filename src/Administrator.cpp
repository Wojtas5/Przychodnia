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
	pielegniarka->setLogin(temp);
	cout << "podaj haslo" << endl;
	cin >> temp;
	pielegniarka->setHaslo(temp);
	cout << "podaj imie" << endl;
	cin >> temp;
	pielegniarka->setImie(temp);
	cout << "podaj nazwisko" << endl;
	cin >> temp;
	pielegniarka->setNazwisko(temp);
	cout << "podaj adres" << endl;
	cin >> temp;
	pielegniarka->setAdres(temp);
	cout << "podaj pesel" << endl;
	cin >> temp;
	pielegniarka->setPesel(temp);
	cout << "podaj numer telefonu" << endl;
	cin >> temp;
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
	lekarz->setLogin(temp);
	cout << "podaj haslo" << endl;
	cin >> temp;
	lekarz->setHaslo(temp);
	cout << "podaj imie" << endl;
	cin >> temp;
	lekarz->setImie(temp);
	cout << "podaj nazwisko" << endl;
	cin >> temp;
	lekarz->setNazwisko(temp);
	cout << "podaj adres" << endl;
	cin >> temp;
	lekarz->setAdres(temp);
	cout << "podaj pesel" << endl;
	cin >> temp;
	lekarz->setPesel(temp);
	cout << "podaj numer telefonu" << endl;
	cin >> temp;
	lekarz->setNumer_telefonu(temp);
	cout << "podaj specjalizacje" << endl;
	cin >> tempInt;
	lekarz->setSpecjalizacja(static_cast<Spec>(tempInt));

	vectorLekarze.push_back(lekarz);
}

void Administrator::usun_pracownika(int id_pracownika, vector<Lekarz*>& vectorLekarze, vector<Pielegniarka*>& vectorPielegniarki)
{
	for (int i = 0; i < vectorLekarze.size(); i++)
	{
		if (vectorLekarze[i]->getIdPracownika() == id_pracownika)
		{
			vectorLekarze.erase(vectorLekarze.begin() + i - 1);
			break;
		}
	}
	for (int i = 0; i < vectorPielegniarki.size(); i++)
	{
		if (vectorPielegniarki[i]->getIdPracownika() == id_pracownika)
		{
			vectorPielegniarki.erase(vectorPielegniarki.begin() + i - 1);
			break;
		}
	}

}
