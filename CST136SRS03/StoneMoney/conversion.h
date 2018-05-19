#pragma once
#include "stdafx.h"
#include <cstdarg>

enum code { US, AU, NZ, FJ, TO, PG, SB };

template<typename A>
class Country
{
	A amount_;

public:
	explicit Country(A am)
	{
		amount_ = am;
	}

	constexpr auto convert(const code C)
	{
		switch (C)
		{
		case US: return amount_ = 1.00;
		case AU: return amount_ = 0.76;
		case NZ: return amount_ = 0.71;
		case FJ: return amount_ = 0.49;
		case TO: return amount_ = 0.45;
		case PG: return amount_ = 0.31;
		case SB: return amount_ = 0.13;
		default: return amount_ = 0.00;
		}
	}

	constexpr double result(code in, code out)
	{
		return { amount_ * convert(out) / convert(in) };
	}

	//double mult_exchange(const int count, code ...)
	//{
	//	va_list ap;
	//	va_start(ap, count);
	//	for(auto i=0; i < count; i++)
	//	{
	//		double temp = convert(va_arg(ap, code));
	//		amount_ += temp;
	//	}
	//	va_end(ap);
	//	return amount_;
	//}
};

