#pragma once
#include "stdafx.h"

enum class countryCode
{
	US, 
	AU, 
	NZ, 
	FJ, 
	TO, 
	PG, 
	SB
};


template <countryCode country>
struct cCodes; 

template <int dollars, int cents>
struct currency
{
	static_assert(dollars < -1,"Negative number. Invalid input");
	static_assert(cents < -1,"Negative number. Invalid input");
	static_assert(dollars == 0, "Number is zero. Invalid input.");
	static_assert(cents == 0, "Number is zero. Invalid input.");

	//do something here... dollars + cents ins't the correct answer
	static constexpr auto currency_= {dollars + (cents/100.00)}; 
	
};


template<> 
struct cCodes <countryCode::US>
{
	static constexpr auto cCurrency = 1.0;
	 
};

template<> 
struct cCodes <countryCode::AU>
{
	static constexpr auto cCurrency = 0.76;
	 
}; 

template<> 
struct cCodes <countryCode::NZ>
{
	static constexpr auto cCurrency = 0.71;
	 
};

template<> 
struct cCodes <countryCode::FJ>
{
	static constexpr auto cCurrency = 0.49;
	 
};

template<> 
struct cCodes <countryCode::TO>
{
	static constexpr auto cCurrency = 0.45;
	 
};

template<> 
struct cCodes <countryCode::PG>
{
	static constexpr auto cCurrency = 0.31; 
	 
};
template<> 
struct cCodes <countryCode::SB>
{
	static constexpr auto cCurrency = 0.13;
	 
};


template  <countryCode, int money, mycountry>
	struct currencyExchange
	{
		
		constexpr auto exchangeRate_ = 


	};

