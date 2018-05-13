#pragma once
#include "countries.h"

template <Countries country, int value>
class conversion
{
};

template <int value>
class conversion<Countries::US, value>
{
public:
	static constexpr int value_{ value };
};

template <int value>
class conversion<Countries::AU, value>
{
private:
	int converted_value_ { 76 * value };
};

