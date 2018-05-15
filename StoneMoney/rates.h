#pragma once
#include "countries.h"
#include <limits>
#include <stdexcept>

template<Country country>
struct Rate
{
private: 
	using exchangeType = double;

	static constexpr exchangeType exchangeRate(Country const countryName) // constexpr does not generate code. static means this function doesnt rely on anything
	{
		auto result{ std::numeric_limits<exchangeType>::signaling_NaN() };
		// NAN is not a number, if the country being entered is not coded, nothing sensible will come out of it 

		switch (countryName)
		{
		case Country::US:
			result = 1.0;
			break;

		case Country::AU:
			result = 0.76;
			break;

		case Country::NZ:
			result = 0.71;
			break;

		case Country::FJ:
			result = 0.49;
			break;

		case Country::TO:
			result = 0.45;
			break;

		case Country::PG:
			result = 0.31;
			break;

		case Country::SB:
			result = 0.13;
			break;

		case Country::YP:
			result = 666;
			break;

		default:
			result = std::numeric_limits<exchangeType>::signaling_NaN();
			throw (std::domain_error("Unknown country!")); // this is if the programmer enteres an unknown country, should never happen, just incase
			break;
		}
		return result;
	}
public:
	static constexpr exchangeType value{ exchangeRate(country) };
};
