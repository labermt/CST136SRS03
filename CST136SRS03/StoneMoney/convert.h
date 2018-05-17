#pragma once
#include <cassert>

template <typename Sum, typename CurrencyValue> 
constexpr auto convert (const Sum s, const CurrencyValue base, const CurrencyValue target)
{	
	assert(static_cast<double>(base) >= 0 && static_cast<double>(target) >= 0);

	auto sum = 0.0;
	sum = s;
	auto base_ = 0.0;
	auto target_ = 0.0;

	//if passed in values are enums Currency
	if(static_cast<double>(base) > 1.0 && static_cast<double>(target) > 1.0)
	{
		base_ = static_cast<double>(base) / 100;
		target_ = static_cast<double>(target) / 100;
	}else
	{
		base_ = static_cast<double>(base);
		target_ = static_cast<double>(target);
	}
	
	return sum = (sum * base_) / target_;
}

