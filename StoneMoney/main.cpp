﻿// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StoneMoney.h"
#include "countries.h"
#include "conversion.h"
#include "dollarcent.h"
// run code, get to breakpoint, debug, windows, disassembly
// no base currency, actual currency 

int main()
{
	// Conversion<DollarCent<0, 76>, Country::AU> x; THIS IS THE FIRST EXAMPLE 
	auto check2 = 42.3;

	// auto check = Conversion<DollarCent<0, 76>, Country::AU>::value; 

	auto check3 = Conversion<Conversion<DollarCent<0, 101>, Country::NZ>, Country::NZ>::value;
	

	return 0;
}

