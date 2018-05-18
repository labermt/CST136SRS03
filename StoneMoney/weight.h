#pragma once
#include "countries.h"

template <countries country>
class weight
{
	static constexpr auto get_weight(countries const code)
	{
		// Suggested by An:https://github.com/an6688/CST136SRS03/blob/master/StoneMoney/rate.h 
		switch (code)
		{
		case countries::US:
			return 1.0;

		case countries::AU:
			return 0.76;

		case countries::NZ:
			return 0.71;

		case countries::FJ:
			return 0.49;

		case countries::TO:
			return 0.45;

		case countries::PG:
			return 0.31;

		case countries::SB:
			return 0.13;

		default:
			throw std::domain_error("Not a valid country!");
		}
	}

public:
	static constexpr auto value_{ get_weight(country) };
};
