// StoneMoney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Conversion.h"
#include "Country.h"
//#include <iostream>
//#include <string>


//template <class T>
//T compare(const T &v1, const T &v2)
//{
//	return (v1 > v2 ? v1 : v2);
//}
//
//template <typename T>
//T compare2(const T &v1, const T &v2)
//{
//	return (v1 > v2 ? v1 : v2);
//}


int main()
{

 //   auto j = compare(500,1000);
	//auto k = compare2(500,499);
	//auto l = compare('a', 'b');
	//auto m = compare2('z', 'q');
	////auto n = compare2(std::string::length("string"),len("string2"));

	//std::cout << j << std::endl
	//	<< k << std::endl
	//	<< l << std::endl
	//	<< m << std::endl;


	conversion<US, NZ>(1);
	conversion<TO, FJ>(1);
	conversion<PG, SB>(1);
	conversion<AU, US>(1);








    return 0;
}

