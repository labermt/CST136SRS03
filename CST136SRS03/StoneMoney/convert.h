#pragma once
#include <cassert>

template <typename Sum, typename CurrencyValue> 
constexpr auto convert (const Sum s, const CurrencyValue base, const CurrencyValue target)
{	
	assert(static_cast<double>(base) >= 0 && static_cast<double>(target) >= 0);

	auto sum = s;
	
	const auto baseC = static_cast<double>(base) / 100;
	const auto targetC = static_cast<double>(target) / 100;
	
	return sum = (sum * baseC) / targetC;
}

