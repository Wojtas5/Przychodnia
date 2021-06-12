#include "pch.h"
#include <string>
#include "Pracownik.cpp"

TEST(PracownikTest, LicznikPracownika)
{
	int id_pierwszego_pracownika = 1;
	int id_ostatniego_pracownika = 10;

	Pracownik pracownicy[10];

	EXPECT_EQ(id_pierwszego_pracownika, pracownicy[0].getIdPracownika());
	EXPECT_EQ(id_ostatniego_pracownika, pracownicy[9].getIdPracownika());
}
