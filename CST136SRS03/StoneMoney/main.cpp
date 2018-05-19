// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Money.h"

int main()
{

	auto oldMoney{ Money<CountryCode::NZ,304> {} }; //Dollar amount shown without decimal
	auto newMoney{ oldMoney.convert(CountryCode::AU) };

	return 0;
}

