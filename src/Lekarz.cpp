#include <iostream>
#include <windows.h>
#include "Lekarz.h"
#include "Termin.h"

void Lekarz::setSpecjalizacja(Spec specjalizacja)
{
	this->specjalizacja = specjalizacja;
}

Spec Lekarz::getSpecjalizacja()
{
	return this->specjalizacja;
}

bool Lekarz::potwierdz_rezerwacje(vector<Termin*> terminy)
{
	if (0 != terminy.size())
	{
		bool znalezionoTermin = false;

		cout << "Wybierz termin ktory chcesz potwierdzic: " << endl;

		for (int i = 0; i < terminy.size(); ++i)
		{
			if (terminy[i]->getLekarz() == this &&
				terminy[i]->getZarezerwowany() == true &&
				terminy[i]->getPotwierdzony() != true)
			{
				cout << i + 1 << ". ";
				terminy[i]->getData()->wyswietl_czas();
				cout << endl;

				znalezionoTermin = true;
			}
		}

		if (true == znalezionoTermin)
		{
			int wybranyTermin = 0;

			cout << "Wybierz termin: ";
			while (1)
			{
				cin >> wybranyTermin;

				if (0 != wybranyTermin && wybranyTermin <= terminy.size())
				{
					cout << "Potwierdzono: ";
					terminy[wybranyTermin - 1]->getData()->wyswietl_czas();
					terminy[wybranyTermin - 1]->setPotwierdzony(true);
					Sleep(500);
					break;
				}
				else
				{
					cout << "Wybrano zly termin, sprobuj ponownie";
				}
			}
		}
		else
		{
			cout << "Brak zarezerwowanych terminow przypisanych do tego lekarza" << endl;
			Sleep(500);
		}
	}
	else
	{
		cout << "Brak terminow" << endl;
		Sleep(500);
	}

	return false;
}

void Lekarz::dodaj_wynik(vector<Termin*>& terminy)
{
	if (0 != terminy.size())
	{
		bool znalezionoTermin = false;

		cout << "Wybierz termin z ktorego chcesz utworzyc wynik: " << endl;

		for (int i = 0; i < terminy.size(); i++)
		{
			if (terminy[i]->getLekarz() == this)
			{
				cout << i + 1 << ". ";
				terminy[i]->getData()->wyswietl_czas();
				cout << endl;
				znalezionoTermin = true;
			}
		}

		if (true == znalezionoTermin)
		{
			int wybranyTermin = 0;

			cout << "Wybrany termin: ";
			while (1)
			{
				cin >> wybranyTermin;

				if (0 != wybranyTermin && wybranyTermin <= terminy.size())
				{
					cout << "Wybrano: ";
					terminy[wybranyTermin - 1]->getData()->wyswietl_czas();

					string temp = "";
					WynikWizyty* wynik = new WynikWizyty;
					wynik->setData(terminy[wybranyTermin - 1]->getData());

					cout << "Opisz przebieg wizyty: ";
					cin >> temp;
					cout << endl;
					wynik->setPrzebieg_wizyty(temp);

					cout << "Wypisz zalecenie: ";
					cin >> temp;
					cout << endl;
					wynik->setZalecenia(temp);

					cout << "Wypisz skierowania: ";
					cin >> temp;
					cout << endl;
					wynik->setSkierowania(temp);

					// TODO W tym miejscu dostajemy exception: read access violation - do naprawy
					Pacjent *pacjent = terminy[wybranyTermin - 1]->getPacjent();
					if (pacjent != nullptr)
					{
						pacjent->wyniki.push_back(wynik);
						cout << "Poprawnie utworzono wynik wizyty" << endl;
					}
					else
					{
						cout << "Zwrocono nullptr";
					}
					Sleep(500);
					break;
				}
				else
				{
					cout << "Wybrano zly termin, sprobuj ponownie";
				}
			}
		}
		else
		{
			cout << "Brak wolnych terminow" << endl;
			Sleep(500);
		}
	}
	else
	{
		cout << "Brak terminow" << endl;
		Sleep(500);
	}
}

bool Lekarz::czy_wolne(Date data, vector<Termin*>& terminy)
{
	if (0 != terminy.size())
	{
		for (int i = 0; i < terminy.size(); i++)
		{
			if (terminy[i]->getLekarz() == this && *terminy[i]->getData() == data)
			{
				return false;
			}
		}

		return true;
	}
	else
	{
		return true;
	}
}
