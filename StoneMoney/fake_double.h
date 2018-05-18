#pragma once
#include "countries.h"
#include <stdexcept>

template <int whole, int fractional>
class fake_double
{
private:
	static constexpr auto check_fractional(int const number)
	{
		if (number >= 100) { throw std::out_of_range("Too many cents!"); }
		return number;
	}

public:
	static constexpr auto value_{ whole + check_fractional(fractional) / 100.0 };
};
