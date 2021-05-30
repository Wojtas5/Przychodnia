#ifndef LEKARZ_H
#define LEKARZ_H

class Lekarz : Pracownik
{
public:
	string specjalizacja;

	void potwierdz_rezerwacje(termin ter);

	void dodaj_wynik(Date data, string przebieg, string zalecenia, string skierowania);

	void czy_wolne(Date data);
};

#endif
