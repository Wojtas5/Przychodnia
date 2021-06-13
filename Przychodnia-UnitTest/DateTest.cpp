#include "pch.h"
#include "Date.cpp"

TEST(DateTest, tworzenie_obiektu)
{
	Date data(2021, 6, 13, 1, 0);

	EXPECT_NE(&data, nullptr);
}

TEST(DateTest, operator_porownania)
{
	Date data_1(2021, 6, 13, 1, 0);
	Date data_2(2021, 6, 13, 1, 0);
	Date data_3(2020, 6, 13, 1, 0);

	bool porownanie = (data_1 == data_2);

	EXPECT_EQ(porownanie, true);

	porownanie = (data_1 == data_3);

	EXPECT_NE(porownanie, true);
}
