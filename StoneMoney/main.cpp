// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "country.h"
#include "conversion.h"
#include "dollarcent.h"
// run code, get to breakpoint, debug, windows, disassembly
// no base currency, actual currency 

int main()
{
 // auto check0 = Conversion<DollarCent<5, 0>, Country::US>::value; 

 // auto check1 = Conversion<DollarCent<10, 50>, NZ>::value;

  auto check2 = Conversion <Conversion < DollarCent<1, 0>, NZ>, US>::value; 

 //auto check3 = Conversion < Conversion <Conversion<DollarCent<4, 20>, NZ>, SB>, NZ>::value;
	
  // auto check4 = Conversion < Conversion <Conversion<DollarCent<3, 50>, NZ>, AU>, SB>::value; 


	return 0;
}

