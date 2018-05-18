#include "stdafx.h"
#include <utility>
#include "convert.h"

int main()
{
	Currency<Country::US> test(std::make_pair(5, 0));
	Currency<Country::NZ> test_2(std::make_pair(10, 50));
	Currency<Country::US> test_3(Currency<Country::NZ>(std::make_pair(100, 25)));
    return 0;
}

