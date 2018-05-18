#pragma once
#include "country.h"
#include <limits>
#include <stdexcept>

template<Country country>
struct Rate
{
private:
	using exchangeType = double;
	// using allows private base class available to the derived class.

	static constexpr exchangeType exchangeRate(Country const countryName)
		// A constexpr function is able to compute and evaluate its result at compilation time, if input is known at compilation time.
		// In other words, the function has "everything it needs" to compute its result at compile time.
		// static means this function doesnt rely on anything
	{
		auto result{ std::numeric_limits<exchangeType>::signaling_NaN() };
		// NAN aka 'not a number', if the country being entered is not coded, nothing sensible will come out of it 
		// static T signaling_NaN() throw();
		// The member stores true for a type that has a representation for a signaling NaN
		// an encoding that is 'Not a Number' which signals its presence in an expression by reporting an exception.
		switch (countryName)
		{
		case US:
			result = 1.0;
			break;

		case AU:
			result = 0.76;
			break;

		case NZ:
			result = 0.71;
			break;

		case FJ:
			result = 0.49;
			break;

		case TO:
			result = 0.45;
			break;

		case PG:
			result = 0.31;
			break;

		case SB:
			result = 0.13;
			break;

		case YP:
			result = 666;
			break;

		default:
			result = std::numeric_limits<exchangeType>::signaling_NaN();
			throw (std::domain_error("Unknown country!"));
			// this is if the programmer enters an unknown country, should never happen, just incase
			// "Signaling NaN's" will throw some sort of flag that may be handled through an exception
		}
		return result;
	}
public:
	static constexpr exchangeType value{ exchangeRate(country) };
};
