#pragma once

template<int dollar, int cent>
struct DollarCent
{
private:
	static_assert(dollar >= 0, "money must be greater than zero");
	static_assert(cent >= 0 && cent < 100, "cents must be between 0 and 99"); // half closed half open parameters, any parameters outside these ranges will not compile 
	using moneyType = double; 
	// using allows you to define moneytype as an alias type rather than a true type, its replacing the word double with moneytype

public:
	static constexpr moneyType value{ dollar + (cent / 100.0) }; // constexpr runs at compile time, not guaranteed in all cases but here it does constexpr deals with doubles 
};
