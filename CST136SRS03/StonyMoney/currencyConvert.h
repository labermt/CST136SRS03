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


template <countryCode> 
struct mycountry
{
public: 

		constexpr countryCode country;


	explicit mycountry(countryCode country)
		: country(country)
	{
	}

	constexpr auto find (mycountry)
	{
		double cCurrency = 0.0;

		switch (country)
		{
		case countryCode::US:
			cCurrency = 1.0;
			break;
		case countryCode::AU:
			cCurrency = 0.76;
			break; 
		case countryCode::NZ:
			cCurrency = 0.71;
			break; 
		case countryCode::FJ:
			cCurrency = 0.49;
			break;
		case countryCode::TO:
			cCurrency = 0.45;
			break;
		case countryCode::SB:
			cCurrency = 0.13;
			break;
		default:
			break; 
		}

		return cCurrency;



template  <countryCode, int money, mycountry>
	struct currencyExchange
	{
		
		constexpr auto exchangeRate_ = 


	};

};