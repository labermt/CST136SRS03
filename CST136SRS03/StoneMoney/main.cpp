// StoneMoney.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "convert.h"
#include "currency.h"
#include <iostream>

 int main()
{
	//static gets rid of last bit of code, not sure how it works so didn't use it
	//static constexpr const auto conversion { convert(100.00, Currency::au, Currency::nz) };

	/*/nesting
	constexpr const auto conversion
 	{
		convert(convert(convert(100.00, Currency::us, Currency::nz), Currency::nz, Currency::au), Currency::au, Currency::us)
	};*/

	//no nesting
	constexpr const auto conversion{ convert(100.00, Currency::au, Currency::nz) };

	auto temp = conversion;

    return 0;
}

