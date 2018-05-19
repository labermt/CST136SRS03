#include "header.h"

int main()
{
  double test{convert(5.0, Rate[Country::AU], Rate[Country::NZ])};

  double test2{convert(20.0, Rate[Country::TO], Rate[Country::PG])};

  double test3{convert(10.0, Rate[Country::US], Rate[Country::SB],
                             Rate[Country::FJ], Rate[Country::US])};

  //std::cout << test << "\n";
  //std::cout << test2 << "\n";
  //std::cout << test3 << "\n";

  return 0;
}
