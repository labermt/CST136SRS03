#pragma once
#include <stdexcept>
#include "Countries.h"

template<Countries country>
class ExchangeRate
{
	static constexpr double exchangeRate()
	{
		auto result{ 0.0 };

		switch (country)
		{
		case Countries::US:
			result = 1.0;
			break;
		case Countries::AU:
			result = 0.76;
			break;
		case Countries::NZ:
			result = 0.71;
			break;
		case Countries::FJ:
			result = 0.49;
			break;
		case Countries::PG:
			result = 0.31;
			break;
		case Countries::SB:
			result = 0.13;
			break;
		case Countries::TO:
			result = 0.45;
			break;
		default:
			//error, invalid country, should never happen unless through user input outside compile time
			result = 0.0;
			throw (std::invalid_argument("Invalid Country."));
		}
		return result;
	}

public:
	static constexpr double value{ exchangeRate() };
};
