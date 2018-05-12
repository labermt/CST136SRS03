#pragma once
#include "stdafx.h"

template
<
	int US = 100,
	int AU = 76, 
	int NZ = 71, 
	int FJ = 49,
	int TO = 45,
	int PG = 31,
	int SB = 13
>


class Currency
{
	template<typename T>
	explicit Currency(double int_val = 1.0) : val{ int_val }
	{
	}
	explicit Currency(double initVal = 0): val{initVal} {}

	//Currency<US,AU,NZ,FJ,TO,PG,SB>&operator =( Currency<US,AU,NZ,FJ,TO,PG,SB> rhs)
	{
		val = ((val * 1.0) * (rhs * 1.0)) / 100;
		return *this;
	}

	template<typename T> 
	constexpr double convert(T value)
	{
		return ((value *1.0) * val) / 100;
	}
};
