#pragma once
#include "countries.h"
#include <cassert>
#include <limits>
#include <system_error>
#include "gsl.h"
#include "fake_double.h"

template<class T, Countries country_1, Countries country_2>
class convert;

template <int whole, int fractional, Countries country_1, Countries country_2>
class convert<fake_double<whole, fractional>, country_1, country_2>
{
private:
	static constexpr double weight(Countries const country)
	{
		//auto result{ std::numeric_limits<double>::signaling_NaN() };

		// Suggested by An:https://github.com/an6688/CST136SRS03/blob/master/StoneMoney/rate.h 
		// TODO: Why can this not be evaluated at compile time?
		switch (country)
		{
		case Countries::US:
			//result = 1.0;
			//break;
			return 1.0;

		case Countries::AU:
			//result = 1.0;
			//break;
			return 0.76;

		case Countries::NZ:
			//result = 1.0;
			//break;
			return 0.71;

		case Countries::FJ:
			//result = 1.0;
			//break;
			return 0.49;

		case Countries::TO:
			//result = 1.0;
			//break;
			return 0.45;

		case Countries::PG:
			//result = 1.0;
			//break;
			return 0.31;

		case Countries::SB:
			//result = 1.0;
			//break;
			return 0.13;

		default:
			//result = std::numeric_limits<double>::signaling_NaN();
			//static_assert(false);
			throw std::domain_error("Not a valid country!");
			//return std::numeric_limits<double>::signaling_NaN();
		}
		//return result;
	}

public:
	static constexpr auto value_{ (fake_double<whole, fractional>::value_ * (weight(country_1) / weight(country_2))) };
};

template <class T, Countries country_1, Countries country_2, Countries country_3 >
class convert<convert<T, country_1, country_2>, country_2, country_3>
{
private:
	static constexpr double weight(Countries const country)
	{
		//auto result{ std::numeric_limits<double>::signaling_NaN() };

		// Suggested by An:https://github.com/an6688/CST136SRS03/blob/master/StoneMoney/rate.h 
		// TODO: Why can this not be evaluated at compile time?
		switch (country)
		{
		case Countries::US:
			//result = 1.0;
			//break;
			return 1.0;

		case Countries::AU:
			//result = 1.0;
			//break;
			return 0.76;

		case Countries::NZ:
			//result = 1.0;
			//break;
			return 0.71;

		case Countries::FJ:
			//result = 1.0;
			//break;
			return 0.49;

		case Countries::TO:
			//result = 1.0;
			//break;
			return 0.45;

		case Countries::PG:
			//result = 1.0;
			//break;
			return 0.31;

		case Countries::SB:
			//result = 1.0;
			//break;
			return 0.13;

		default:
			//result = std::numeric_limits<double>::signaling_NaN();
			//static_assert(false);
			throw std::domain_error("Not a valid country!");
			//return std::numeric_limits<double>::signaling_NaN();
		}
		//return result;
	}

public:
	static constexpr auto value_{ T::value_ * (weight(country_2) / weight(country_3)) };
};
