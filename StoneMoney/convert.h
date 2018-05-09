#pragma once
#include "stdafx.h"

template
<
	int US,
	int AU, 
	int NZ, 
	int FJ,
	int TO,
	int PG,
	int SB
>

class Currency
{
private:
	double val;

public:
	explicit Currency(double initVal = 0): val(initVal) {}
	double value() const { return val; }
	double& value() { return val; }

	template<typename T>
	double convert(T value)
	{
		return ((value *1.0) * val) / 100;
	}
};
