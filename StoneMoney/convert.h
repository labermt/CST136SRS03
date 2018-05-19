#pragma once
#include "stdafx.h"


enum class Country { US, AU, NZ, FJ, TO, PG, SB };

template<Country country>
struct Exchange;

template<>
struct Exchange<Country::US>
{
	static constexpr double rate_ = 1.0;
}; 

template<>
struct Exchange<Country::AU>
{
	static constexpr double rate_ = .76;
};

template<>
struct Exchange<Country::NZ>
{
	static constexpr double rate_ = .71;
};

template<>
struct Exchange<Country::FJ>
{
	static constexpr double rate_ = .49;
};

template<>
struct Exchange<Country::TO>
{
	static constexpr double rate_ = .45;
};

template<>
struct Exchange<Country::PG>
{
	static constexpr double rate_ = .31;
};

template<>
struct Exchange<Country::SB>
{
	static constexpr double rate_ = .13;
};

template<int dollars, int cents>
struct Money
{
	static_assert(dollars >= 0, "invalid dollars");
	static_assert(cents <= 100 && cents >= 0, "invalid cents");
	static constexpr auto money_{ dollars + (cents / 100.0) };
};


template<Country nation, typename currency>
struct Currency;


template<Country to_nation, int dollars, int cents>
struct Currency<to_nation, Money<dollars,cents>>
{
	static constexpr auto val_{ Money<dollars,cents>::money_ };
	static constexpr auto nation_{ to_nation };

};

template<Country to_nation, Country from_nation, typename last_conversion>
struct Currency<to_nation, Currency<from_nation, last_conversion>>
{
	static constexpr auto val_{ Currency<from_nation, last_conversion>::val_ * (Exchange<to_nation>::rate_ / Exchange<from_nation>::rate_) };
	static constexpr auto nation_{ to_nation };
};
