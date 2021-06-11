#include "pch.h"
#include <string>
#include "Uzytkownik.cpp"

TEST(UzytkownikTest, PoprawneLogowanie) 
{
	string poprawny_login = "DobryLogin";
	string poprawne_haslo = "DobreHaslo";

	Uzytkownik uz(poprawny_login, poprawne_haslo, "Marian", "Kowalski", "Prosta", "12345", "997");

	bool poprawne_zalogowanie = false;

	poprawne_zalogowanie = uz.zaloguj(poprawny_login, poprawne_haslo);

	EXPECT_TRUE(poprawne_zalogowanie);
}
