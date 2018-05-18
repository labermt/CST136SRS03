// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conversion.h"
#include <iostream>
#include "fake_double.h"


int main()
{
	auto const test{ fake_double<3,50>{}.value_ };

	auto const test1{ convert<fake_double<3,50>, Countries::AU, Countries::NZ>{}.value_ };

	auto const test2{ convert<convert<fake_double<3,50>, Countries::AU, Countries::US>, Countries::US, Countries::NZ>{}.value_ };

	auto const text3{ convert<convert<convert<fake_double<3,50>, Countries::AU, Countries::US>, Countries::US, Countries::NZ>, Countries::NZ, Countries::SB >{}.value_ };

	return 0;
}
