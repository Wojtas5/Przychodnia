#include "pch.h"
#include <string>
#include "Uzytkownik.cpp"

TEST(UzytkownikTest, test_poprawne_logowanie) 
{
	string poprawny_login = "DobryLogin";
	string poprawne_haslo = "DobreHaslo";

	Uzytkownik uz(poprawny_login, poprawne_haslo, "Marian", "Kowalski", "Prosta", "12345", "997");

	bool poprawne_zalogowanie = false;

	poprawne_zalogowanie = uz.zaloguj(poprawny_login, poprawne_haslo);

	EXPECT_TRUE(poprawne_zalogowanie);
}

TEST(UzytkownikTest, test_logowanie_zly_login)
{
	string poprawny_login = "DobryLogin";
	string niepoprawny_login = "ZlyLogin";
	string poprawne_haslo = "DobreHaslo";

	Uzytkownik uz(poprawny_login, poprawne_haslo, "Marian", "Kowalski", "Prosta", "12345", "997");

	bool niepoprawne_zalogowanie = false;

	niepoprawne_zalogowanie = uz.zaloguj(niepoprawny_login, poprawne_haslo);

	EXPECT_FALSE(niepoprawne_zalogowanie);
}

TEST(UzytkownikTest, test_logowanie_zle_haslo)
{
	string poprawny_login = "DobryLogin";
	string poprawne_haslo = "DobreHaslo";
	string niepoprawne_haslo = "ZleHaslo";

	Uzytkownik uz(poprawny_login, poprawne_haslo, "Marian", "Kowalski", "Prosta", "12345", "997");

	bool niepoprawne_zalogowanie = false;

	niepoprawne_zalogowanie = uz.zaloguj(poprawny_login, niepoprawne_haslo);

	EXPECT_FALSE(niepoprawne_zalogowanie);
}

TEST(UzytkownikTest, test_poprawne_wylogowanie)
{
	bool zalogowanie = false;

	string poprawny_login = "DobryLogin";
	string poprawne_haslo = "DobreHaslo";

	Uzytkownik uz(poprawny_login, poprawne_haslo, "Marian", "Kowalski", "Prosta", "12345", "997");

	uz.zaloguj(poprawny_login, poprawne_haslo);
	zalogowanie = uz.getZalogowany();
	EXPECT_TRUE(zalogowanie);
}

TEST(UzytkownikTest, test_bledne_wylogowanie)
{
	bool zalogowanie = false;

	string poprawny_login = "DobryLogin";
	string poprawne_haslo = "DobreHaslo";

	Uzytkownik uz(poprawny_login, poprawne_haslo, "Marian", "Kowalski", "Prosta", "12345", "997");

	zalogowanie = uz.getZalogowany();
	EXPECT_FALSE(zalogowanie);
}
