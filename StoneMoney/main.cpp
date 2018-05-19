#include "stdafx.h"
#include "convert.h"

int main()
{

	Currency<Country::NZ, Money<10,50>> test_1;
	auto money_1 = test_1.val_;
	auto nation_1 = test_1.nation_;
	Currency<Country::FJ, Currency<Country::US, Money<10, 50>>> test_2;
	auto money_2 = test_2.val_;
	auto nation_2 = test_2.nation_;
	Currency<Country::NZ, Currency<Country::SB, Currency<Country::NZ, Money<10, 50>>>> test_3;
	auto money_3 = test_3.val_;
	auto nation_3 = test_3.nation_;
	Currency<Country::PG, Currency<Country::NZ, Currency<Country::SB, Currency<Country::NZ, Money<10, 50>>>>> test_4;
	auto money_4 = test_4.val_;
	auto nation_4 = test_4.nation_;
    return 0;
}

