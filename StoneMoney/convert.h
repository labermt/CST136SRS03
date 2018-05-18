#pragma once
#include "stdafx.h"


enum class Country { US, AU, NZ, FJ, TO, PG, SB };

template<Country country>
class Exchange;


template<>
class Exchange<Country::US>
{
public:
	static constexpr double rate = 1.0;

}; 

template<>
class Exchange<Country::AU>
{
public:
	static constexpr double rate = .76;

};

template<>
class Exchange<Country::NZ>
{
public:
	static constexpr double rate = .71;

};

template<>
class Exchange<Country::FJ>
{
public:
	static constexpr double rate = .49;

};

template<>
class Exchange<Country::TO>
{
public:
	static constexpr double rate = .45;

};

template<>
class Exchange<Country::PG>
{
public:
	static constexpr double rate = .31;

};

template<>
class Exchange<Country::SB>
{
public:
	static constexpr double rate = .13;

};


template<Country nation>
class Currency
{
	using Money = std::pair<int, int>;

private:
	double usd_val_{};



public:

	Currency(Money money) : usd_val_{ money.first + (money.second / 100.0) }
	{
	}

	/*constexpr explicit Currency(Currency<Country::NZ> from_currency) : usd_val_{ from_currency.get_money() }
	{
	}*/

	constexpr double get_money() const
	{
		return usd_val_;
	}
};
