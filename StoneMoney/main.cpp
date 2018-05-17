// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conversion.h"
#include <iostream>


int main()
{
	class wrapper
	{
	private:
		int const converted_value_{ 0 };
		static int double_to_int(double const num) { return num * 100; }

	public:
		explicit wrapper(double const value) : converted_value_{ double_to_int(value) } {}

	public:
		int get_converted_value_() const noexcept { return converted_value_; }
	};


	auto const test3 = wrapper(4.32).get_converted_value_();

	auto const test1{ convert<500, Countries::AU, Countries::NZ>{} };
	auto const test2{ convert<500, Countries::AU, Countries::RU>{} };


	std::cout << test1.value_;
	std::cout << test2.value_;

	return 0;
}
