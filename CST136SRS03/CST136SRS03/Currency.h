#pragma once
#include "Currency.h"
#include "Countries.h"
#include "ExchangeRate.h"

//primary template
template <int Value, Countries FromCountry, Countries ToCountry>
struct Currency
{
	static constexpr auto value{
		(Value * ExchangeRate<FromCountry>{}.value) / ExchangeRate<ToCountry>{}.value
	};
	static constexpr Countries country{ ToCountry };
};
