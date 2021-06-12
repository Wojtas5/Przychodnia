#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int rok;
	int miesiac;
	int dzien;
	int godzina;
	int minuta;

public:
	Date();

	Date(int r, int m, int d, int godz, int min);

	void wyswietl_czas();

	bool Date::operator==(Date other);
};

#endif