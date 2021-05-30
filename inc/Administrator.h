#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

class Administrator : Uzytkownik
{

public:
	void dodaj_pielegniarke();

	void dodaj_lekarza();

	void usun_pracownika(int id_pracownika);
};

#endif
