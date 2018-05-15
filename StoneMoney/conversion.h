#pragma once
#include "countries.h"
#include "dollarcent.h"
#include "rate.h"

// templates parameters only take types or integral values, only two options 
// Inception is the type im sending in, and country is the value being sent in 

template<class T, Country countryName>
struct Conversion; // will cause intentional error

template<int dollar, int cent, Country countryName>
struct Conversion<DollarCent<dollar, cent>, countryName>
{
	static constexpr Country country{ countryName }; // constexpr allows this line to run only at compile time 
	static constexpr auto value{DollarCent<dollar, cent>::value}; 
}; 

template<class Inception, Country fromCountry, Country toCountry>
struct Conversion<Conversion<Inception, fromCountry>, toCountry>
{
	// DollarCent<dollar, cent>
	static constexpr Country country{ toCountry }; // constexpr allows this line to run only at compile time 
	static constexpr auto value{ Inception::value * Rate<fromCountry>::value / Rate<toCountry>::value };
};
