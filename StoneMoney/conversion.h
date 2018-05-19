#pragma once
#include "country.h"
#include "dollarcent.h"
#include "rate.h"

// templates parameters ONLY take' types' or 'integral values'
// 'Inception' is the type I'm sending in, and country is the value being sent in 

template<class T, Country countryName>
struct Conversion; // will cause intentional error 

template<int dollar, int cent, Country countryName>// partial specialization
struct Conversion<DollarCent<dollar, cent>, countryName>
{
	static constexpr Country country{ countryName }; // constexpr allows this line to run only at compile time 
	static constexpr auto value{DollarCent<dollar, cent>::value}; 
}; 

template<class Inception, Country fromCountry, Country toCountry> // recursive template, partial specializtion 
struct Conversion<Conversion<Inception, fromCountry>, toCountry>
{
	static constexpr Country country{ toCountry }; // constexpr allows this line to run only at compile time 
	static constexpr auto value{ Conversion< Inception, fromCountry >::value * Rate<fromCountry>::value / Rate<toCountry>::value };
};

// 'Inception' is recursion of less specialized templates, into two different specializations and is more complex of the other two templates 