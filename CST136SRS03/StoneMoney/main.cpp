// StoneMoney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "convert.h"
#include <iostream>

enum class Currency {us = 100, au = 76, nz = 71, fj = 49, to = 45, pg = 31, sb = 13};

int main()
{
	auto temp = 0.0;

	std::cout << convert<int, Currency>(100, Currency::fj, Currency::au);

	
	std::cin >> temp;

    return 0;
}

