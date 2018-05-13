// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conversion.h"


int main()
{
	const auto test{ conversion<Countries::US, 1>{} };

	const auto AUtest{ conversion<Countries::AU, 1>{} };

	const auto test3{ conversion < Countries::AU, conversion<Countries::US, 1>{}.value_ > {} };

	return 0;
}
