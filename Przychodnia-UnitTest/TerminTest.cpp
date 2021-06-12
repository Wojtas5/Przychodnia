#include "pch.h"
#include "Termin.cpp"

TEST(TerminTest, test_zarezerwowany)
{
	Termin termin;

	EXPECT_EQ(termin.getZarezerwowany(), false);

	termin.setZarezerwowany(true);

	EXPECT_EQ(termin.getZarezerwowany(), true);

	termin.setZarezerwowany(false);

	EXPECT_EQ(termin.getZarezerwowany(), false);
}

TEST(TerminTest, test_potwierdzony)
{
	Termin termin;

	EXPECT_EQ(termin.getPotwierdzony(), false);

	termin.setPotwierdzony(true);

	EXPECT_EQ(termin.getPotwierdzony(), true);

	termin.setPotwierdzony(false);

	EXPECT_EQ(termin.getPotwierdzony(), false);
}
