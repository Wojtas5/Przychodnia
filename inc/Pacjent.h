#ifndef PACJENT_H
#define PACJENT_H

class Pacjent : Uzytkownik
{
private:
	int numer_pacjenta;
	static int licznik_pacjentow;
	bool zarejestrowany;

public:
	void rejestracja();

	void wygenerujNumer_pacjenta();

	void setZarejestrowany();

	void zarezerwuj_termin(Termin termin);

	void usun_rezerwacje(Termin termin);
};

#endif
