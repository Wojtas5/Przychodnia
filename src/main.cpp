#include <iostream>
#include <vector>
#include <cstdio>
#include <windows.h>
#include "Pacjent.h"
#include "Pielegniarka.h"
#include "Lekarz.h"
#include "Administrator.h"

using namespace std;

vector<Pielegniarka*> vectorPielegniarki;
vector<Lekarz*>vectorLekarze;
vector<Pacjent*> vectorPacjenci;
vector<Administrator*> vectorAdministratorzy;
vector<Termin*> vectorTerminy;
static bool zalogowany = false;

int czynnosc = 0;

void PacjentAction(Pacjent *pacjent,string login) 
{
	while (czynnosc != '9')
	{
		cout << "Menu pacjenta " << login << ":\n1.Zarezerwuj termin\n2.Usun rezerwacje\n3.Wyswietl wyniki\n9. Wyloguj\n";
		czynnosc = getchar();
		if (czynnosc == '\n')
			czynnosc = getchar();
		system("cls");

		switch (czynnosc)
		{
		case '1':
			pacjent->zarezerwuj_termin(vectorTerminy);
			break;
		case '2':
			pacjent->usun_rezerwacje(vectorTerminy);
			break;
		case '3':
			//	pacjent->wyswietl_wynik();
			break;
		case '9':
			pacjent->wyloguj();
			zalogowany = pacjent->getZalogowany();
			cout << "WYLOGOWANO\n";
			Sleep(300);
			break;
		default:
			cout << "BRAK TAKIEJ OPCJI W MENU\n";
			Sleep(300);
			break;
		}

		system("cls");
	}
}
void LekarzAction(Lekarz *lekarz, string login) 
{
	while (czynnosc != '9')
	{
		cout << "Menu lekarza: " << login << "\n1.Potwierdz rezerwacje\n2.Dodaj wynik\n9. Wyloguj\n";
		czynnosc = getchar();
		if (czynnosc == '\n')
			czynnosc = getchar();
		system("cls");

		switch (czynnosc)
		{
		case '1':
			lekarz->potwierdz_rezerwacje(vectorTerminy);
			break;
		case '2':
			//lekarz->dodaj_wynik();
			break;
		case '9':
			lekarz->wyloguj();
			zalogowany = lekarz->getZalogowany();
			cout << "WYLOGOWANO\n";
			Sleep(300);
			break;
		default:
			cout << "BRAK TAKIEJ OPCJI W MENU\n";
			Sleep(300);
			break;
		}
		system("cls");
	}
}
void pielegniarkaAction(Pielegniarka *pielegniarka, string login) 
{
	while (czynnosc != '9')
	{
		
		cout << "Menu pielegniarki " << login << ":\n1.Usun pacjenta\n2.Dodaj termin\n9. Wyloguj\n";
		czynnosc = getchar();
		if (czynnosc == '\n')
			czynnosc = getchar();
		system("cls");

		switch (czynnosc)
		{
		case '1':
			cout << "Podaj id pacjenta ktorego chcesz usunac\n 0. Anuluj\n";
			int idPacjenta;
			cin >> idPacjenta;
			if (idPacjenta != 0)
				pielegniarka->usuniecie_pacjenta(idPacjenta, vectorPacjenci);
			break;
		case '2':
			pielegniarka->dodaj_wolny_termin(vectorTerminy, vectorLekarze);
			break;
		case '9':
			pielegniarka->wyloguj();
			zalogowany = pielegniarka->getZalogowany();
			cout << "WYLOGOWANO\n";
			Sleep(300);
			break;
		default:
			cout << "BRAK TAKIEJ OPCJI W MENU\n";
			Sleep(300);
			break;
		}
		system("cls");
	}
}
void administratorAction(Administrator *administrator, string login) 
{
	while (czynnosc != '9')
	{
		system("cls");
		cout << "Menu administratora: " << login << "\n1.Dodaj lekarza\n2.Dodaj pielegniarke\n3.Usun pracownika\n9. Wyloguj\n";
		czynnosc = getchar();
		if (czynnosc == '\n')
			czynnosc = getchar();
		system("cls");

		switch (czynnosc)
		{
		case '1':
			cout<<"Dodaje lekarza\n";
			administrator->dodaj_lekarza(vectorLekarze);
			break;
		case '2':
			cout << "Dodaje pielegniarke\n";
			administrator->dodaj_pielegniarke(vectorPielegniarki);
			break;
		case '3':
			cout << "Podaj id pracownika ktorego chcesz usunac\n 0. Anuluj\n";
			int idPracownika;
			cin >> idPracownika;
			if (idPracownika != 0)
				administrator->usun_pracownika(idPracownika, vectorLekarze, vectorPielegniarki);
			break;
		case '9':
			administrator->wyloguj();
			zalogowany = administrator->getZalogowany();
			cout << "WYLOGOWANO\n";
			Sleep(300);
			break;
		default:
			cout << "BRAK TAKIEJ OPCJI W MENU\n";
			Sleep(300);
			break;
		}
	}
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
				system("cls");
				PacjentAction(vectorPacjenci[i], login);
				break;
			}
		}
	if (!zalogowany)
		for (int i = 0; i < vectorLekarze.size(); i++)
		{
			if (vectorLekarze[i]->zaloguj(login, haslo))
			{
				zalogowany = vectorLekarze[i]->getZalogowany();
				system("cls");
				LekarzAction(vectorLekarze[i], login);
				break;
			}
		}
	if (!zalogowany)
		for (int i = 0; i < vectorPielegniarki.size(); i++)
		{
			if (vectorPielegniarki[i]->zaloguj(login, haslo))
			{
				zalogowany = vectorPielegniarki[i]->getZalogowany();
				system("cls");
				pielegniarkaAction(vectorPielegniarki[i], login);
				break;
			}
		}
	if (!zalogowany)
	{
		if (login == "admin" && haslo == "admin")
		{
			Administrator* admin = new Administrator();
			administratorAction(admin, login);
		}
	}

	if (!zalogowany) 
	{
		cout << "Bledne dane logowania\n";
		Sleep(300);
	}
}

int main()
{
	while(1)
	{
		string login, haslo;
		cout << "MENU:\n1. Zaloguj sie\n2. Zarejestruj sie\n";
		czynnosc = getchar();
		if (czynnosc == '\n')
			czynnosc = getchar();
		system("cls");

		switch (czynnosc)
		{
		case '1':
			cout << "Podaj login: ";
			cin >> login;
			cout << "\nPodaj haslo: ";
			cin >> haslo;
			logowanie(login, haslo);
			break;
		case '2':
			rejestracja();
			break;
		default:
			cout << "BRAK TAKIEJ OPCJI W MENU\n";
			Sleep(300);
			break;
		}

		system("cls");
	}

	return 0;
}
