#include <iostream>
#include "Pacjent.h"
#include "Pielegniarka.h"
#include "Lekarz.h"
#include "Administrator.h"
#include <vector>

using namespace std;

vector<Pielegniarka*> vectorPielegniarki;
vector<Lekarz*>vectorLekarze;
vector<Pacjent*> vectorPacjenci;
vector<Administrator*> vectorAdministratorzy;
bool zalogowany = false;

int czynnosc = 0;

void PacjentAction(string login) {
	cout << "Menu pacjenta " << login << ":\n 1.Zarezerwuj termin\n2.Usun rezerwacje\n3.Wyswietl wyniki\n9. Wyloguj\n";
}
void LekarzAction(string login) {
	cout << "Menu lekarza: " << login << "\n 1.Potwierdz rezerwacje\n2.Dodaj wynik\n9. Wyloguj\n";

}
void pielegniarkaAction(string login) {
	cout << "Menu pielegniarki " << login << ":\n1.Usun pacjenta\n2.Dodaj termin\n9. Wyloguj\n";

}
void administratorAction(string login) {
	cout << "Menu administratora: " << login << "\n 1.Dodaj lekarza\n2.Dodaj pielegniarke\n3.Usun pracownika\n9. Wyloguj\n";

}
void rejestracja()
{
	Pacjent* pacjent = new Pacjent;

	vectorPacjenci.push_back(pacjent);
	pacjent->rejestracja();
}
void logowanie(string login, string haslo)
{
	if (!zalogowany)
		for (int i = 0; i < vectorPacjenci.size(); i++)
		{
			if (vectorPacjenci[i]->zaloguj(login, haslo))
			{
				zalogowany = vectorPacjenci[i]->getZalogowany();
				PacjentAction(login);
				break;
			}
		}
	if (!zalogowany)
		for (int i = 0; i < vectorLekarze.size(); i++)
		{
			if (vectorLekarze[i]->zaloguj(login, haslo))
			{
				zalogowany = vectorLekarze[i]->getZalogowany();
				LekarzAction(login);
				break;
			}
		}
	if (!zalogowany)
		for (int i = 0; i < vectorPielegniarki.size(); i++)
		{
			if (vectorPielegniarki[i]->zaloguj(login, haslo))
			{
				zalogowany = vectorPielegniarki[i]->getZalogowany();
				pielegniarkaAction(login);
				break;
			}
		}
	if (!zalogowany)
		for (int i = 0; i < vectorAdministratorzy.size(); i++)
		{
			if (vectorAdministratorzy[i]->zaloguj(login, haslo))
			{
				zalogowany = vectorAdministratorzy[i]->getZalogowany();
				administratorAction(login);
				break;
			}
		}
}

int main()
{
	do
	{
		string login, haslo;
		cout << "MENU:\n1. Zaloguj sie\n2. Zarejestruj sie\n";
		cin >> czynnosc;


		switch (czynnosc)
		{
		case 1:
			cout << "Podaj login: ";
			cin >> login;
			cout << "\n Podaj haslo: ";
			cin >> haslo;
			logowanie(login, haslo);
			break;
		case 2:
			rejestracja();
			break;
		default:
			cout << "BRAK TAKIEJ OPCJI W MENU\n";
			break;
		}
	} while (1 == 1);
	return 0;
}
