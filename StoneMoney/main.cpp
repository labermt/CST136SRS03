// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conversion.h"
#include "double_alias.h"


int main()
{
	// Test 1 is 10.50US converted to NZ
	auto const test1{ conversion<double_alias<10,50>, countries::US, countries::NZ>{}.value_ };

	// Test 2 is 100.25US  US converted to NZ converted to TO
	auto const test2{ conversion<double_alias<100,25>, countries::NZ, countries::TO>{}.value_ };

	// Test 3 is 3.50 US converted to NZ converted to AU to SB
	auto const test3{ conversion<conversion<double_alias<3,50>, countries::NZ, countries::AU>, countries::AU, countries::SB>{}.value_ };

	// Test 4 is 420 US converted to AU converted to US to SB to AU 
	auto const text4{ conversion<conversion<conversion<double_alias<420,0>, countries::AU, countries::US>, countries::US, countries::SB>, countries::SB, countries::AU >{}.value_ };

	return 0;
}
