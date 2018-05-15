#pragma once
#include "stdafx.h"


enum class Country { US, AU, NZ, FJ, TO, PG, SB };

template<class Country, int Money>
class Currency
{
private:
	double val_{};

public:
	template<Country US>
	Currency() : val_{ Money * 1.0 }
	{
	}

	template<Country AU>
	Currency():val_{Money * .76}
	{
	}

	template<>
	struct compiler_assert<false>;
};
	/*template<typename T, Currency<>
	constexpr double convert(T value, currency to)
	{
		return((value * 1.0 ) / val_) * to.val_;
	}*/
