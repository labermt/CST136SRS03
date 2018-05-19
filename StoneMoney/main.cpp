#include "stdafx.h"
#include <utility>
#include "convert.h"

int main()
{
	using dollars_cents = std::pair<int, int>;
	Currency<Country::US> test(dollars_cents(5, 0));
	Currency<Country::NZ> test_2(dollars_cents(10, 50));
	Currency<Country::US> test_3(Currency<Country::NZ>(dollars_cents(100, 25)));
    return 0;
}

