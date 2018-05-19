#pragma once

template<int dollar, int cent>
struct DollarCent
{
private:
	static_assert(dollar >= 0, "Money must be greater than zero");
	static_assert(cent >= 0 && cent < 100, "Cents must be between 0 and 99"); 
	// static_assert tests a software assertion at compile time.
	// If the specified constant expression is false, the compiler displays the specified message. 
	// If one is provided, and the compilation fails; otherwise, the declaration has no effect.
	// Half closed half open parameters, any parameters outside these ranges will not compile 
	using moneyType = double; 
	// using allows you to define moneytype as an alias type rather than a true type, its replacing the word double with moneytype

public:
	static constexpr moneyType value{ dollar + (cent / 100.0) }; 
	// constexpr runs at compile time, not guaranteed in all cases but here it does constexpr deals with doubles 
	// need 100.0 to return the result in doubles and not int's 
};
