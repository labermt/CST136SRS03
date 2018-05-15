#pragma once
#include "stdafx.h"
#include "countries.h"




template<Countries name, int value>
class Currency
{
	double val_{};

	template<class US>
	Currency()
	{
		val_{ 1.0 };
	}

	template<>
	struct compiler_assert<false>;

public:
	/*template<typename T, Currency<>
	constexpr double convert(T value, currency to)
	{
		return((value * 1.0 ) / val_) * to.val_;
	}*/
};
