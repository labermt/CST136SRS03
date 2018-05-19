#ifndef header_h
#define header_h


#include <iostream>
#include <map>
#include <vector>

enum class Country {US, NZ, AU, PG, TO, SB, FJ};

static std::map <Country, double> Rate { {Country::AU, 0.75},
                                         {Country::US, 1.0},
					 {Country::NZ, 0.69},
					 {Country::PG, 0.31},
 			                 {Country::TO, 0.43},
 			                 {Country::SB, 0.13},
 			                 {Country::FJ, 0.48} };


template<typename T>
static constexpr T convert(T amount)
{
  return amount;
}

template<typename T, typename... Args>
static constexpr T convert(T amount, Args... args)
{
  std::vector<T> v { { args...} };
  return amount * v[0] / v.back();
}

#endif
