// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conversion.h"
#include <iostream>


int main()
{
	const auto test{ conversion<Countries::US, 1>{} };

	auto const test1{ conversion2 <Countries::AU, conversion<Countries::US, 1>>{} };

	std::cout << test1.value_;

	return 0;
}
