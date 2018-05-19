#pragma once
#include "countries.h"
#include "double_alias.h"
#include "weight.h"

template<class T, countries country_1, countries country_2>
class conversion;

// For initial conversion from a raw number
template <int whole, int fractional, countries country_1, countries country_2>
class conversion<double_alias<whole, fractional>, country_1, country_2>
{
public:
	static constexpr auto value_{ (double_alias<whole, fractional>::value_ * (weight<country_1>::value_ / weight<country_2>::value_)) };
};

// For nested conversions
template <class T, countries country_1, countries country_2, countries country_3 >
class conversion<conversion<T, country_1, country_2>, country_2, country_3>
{
public:
	static constexpr auto value_{ conversion<T, country_1,country_2>::value_ * (weight<country_2>::value_ / weight<country_3>::value_) };
};
