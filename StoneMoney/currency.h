#pragma once
#include "gsl.h"
#include "countries.h"

template<Country C, int I, Convert D>
class Currency;

template<int I, Convert D>
class Currency<Country::US, I, D>
{
public:
	static constexpr int value_{ I };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};

template<int I, Convert D>
class Currency<Country::AU, I, D>
{
public:
	static constexpr int value_{ D == Convert::kFrom ? I * 76 / 100 : I * 100 / 76 };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};

template<int I, Convert D>
class Currency<Country::NZ, I, D>
{
public:
	static constexpr int value_{ D == Convert::kFrom ? I * 71 / 100 : I * 100 / 71 };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};

template<int I, Convert D>
class Currency<Country::FJ, I, D>
{
public:
	static constexpr int value_{ D == Convert::kFrom ? I * 49 / 100 : I * 100 / 49 };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};

template<int I, Convert D>
class Currency<Country::TO, I, D>
{
public:
	static constexpr int value_{ D == Convert::kFrom ? I * 45 / 100 : I * 100 / 45 };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};

template<int I, Convert D>
class Currency<Country::PG, I, D>
{
public:
	static constexpr int value_{ D == Convert::kFrom ? I * 31 / 100 : I * 100 / 31 };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};

template<int I, Convert D>
class Currency<Country::SB, I, D>
{
public:
	static constexpr int value_{ D == Convert::kFrom ? I * 13 / 100 : I * 100 / 13 };

	constexpr Currency() = default;

	constexpr operator int() const
	{
		return value_;
	}
};