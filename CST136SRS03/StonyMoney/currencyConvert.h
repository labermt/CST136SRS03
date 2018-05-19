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

template <int money>
struct currency
{
	static_assert(money < -1,"Negative number. Invalid input"); 
	static_assert(money == 0, "Number is zero. Invalid input."); 
	constexpr auto currency_= money; 
	
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
		switch (country)
		{
		case countryCode::US:
			return 1.0;
			break;
		case countryCode::AU:
			return 0.76;
			break; 
		case countryCode::NZ:
			return 0.71;
			break; 
		case countryCode::FJ:
			return 0.49;
			break;
		case countryCode::TO:
			return 0.45;
			break;
		case countryCode::SB:
			return 0.13;
			break;
		default:
			break; 
		}

		return;
	}

template  <countryCode, int money>
	struct currencyExchange
	{
		



	};

};