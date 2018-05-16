#pragma once
#include "countries.h"

template <Countries country, int value>
class conversion
{
};

template <Countries country, class conversion>
class conversion2
{
};

template <int value>
class conversion<Countries::US, value>
{
public:
	static constexpr int value_{ value };
};

template <int value>
class conversion<Countries::AU, value>
{
public:
	static constexpr int value_{ 76 * value };
};

template <class conversion1>
class conversion2<Countries::AU, conversion1>
{
public:
	static constexpr int value_{ conversion1::value_ * 67 };
};
