// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conversion.h"
#include "double_alias.h"


int main()
{
	auto const test{ double_alias<3,50>{}.value_ };

	auto const test1{ conversion<double_alias<3,50>, countries::AU, countries::NZ>{}.value_ };

	auto const test2{ conversion<conversion<double_alias<3,50>, countries::AU, countries::US>, countries::US, countries::NZ>{}.value_ };

	auto const text3{ conversion<conversion<conversion<double_alias<3,50>, countries::AU, countries::US>, countries::US, countries::NZ>, countries::NZ, countries::SB >{}.value_ };

	return 0;
}
