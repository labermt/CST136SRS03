#include "stdafx.h"
#include "convert.h"

int main()
{
	Currency<Country::US,Money<5,0>> test;
	auto us_money =  test.val_;
	auto us_nation = test.nation_;
	Currency<Country::NZ, Money<10,50>> test_2;
	auto nz_money = test_2.val_;
	auto nz_nation = test_2.nation_;
	Currency<Country::NZ, Currency<Country::US, Money<10, 50>>> test_3;
	auto to_money = test_3.val_;
	auto to_nation = test_3.nation_;
	Currency<Country::NZ, Currency<Country::SB, Currency<Country::NZ, Money<10, 50>>>> test_4;
	auto sb_money = test_4.val_;
	auto sb_nation = test_4.nation_;
	
    return 0;
}

