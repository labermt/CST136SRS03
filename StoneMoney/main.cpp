#include "stdafx.h"
#include <utility>
#include "convert.h"

//using US = Currency<Countries::US>;

//using US = Currency;

int main()
{
	/*Currency<Country::US, 5> test;
	test.convert(Country::AU);*/
	double d = 5.0;
	constexpr Currency<Country::US> test(std::make_pair(5, 0));
	constexpr Currency<Country::NZ> test_2(std::make_pair(10, 50));
	//constexpr Currency<Country::US> test_3(Currency<Country::NZ>(std::make_pair(100, 25)));
    return 0;
}





//
//#include <tuple>
//
//enum class Topping {kPepperoni, kCanadianBacon, kPineapple, kOlives};
//using DoubleTopping = std::tuple<Topping, Topping>;
//constexpr DoubleTopping kHawaiian{ Topping::kPineapple, Topping::kCanadianBacon };
//
//template<class Topping, unsigned Inch = 8U>
//struct Pizza
//{
//public:
//    auto getFreeDessert() const
//    {
//        return false;
//    };
//};
//
//template<unsigned Inch>
//struct Pizza<DoubleTopping, Inch>
//{
//public:
//    Pizza(DoubleTopping topping): topping_{topping}
//    {
//    }
//
//    auto getFreeDessert() const
//    {
//        return true;
//    };
//
//private:
//    const DoubleTopping topping_;
//};
//
//template<class Topping>
//struct Pizza<Topping , 16>
//{
//public:
//    auto getFreeAntacid() const
//    {
//        return true;
//    };
//};
//
//int main_2()
//{
//    const auto big_kahuna{ Pizza<DoubleTopping, 32>{ kHawaiian } };
//    const auto isFree{ big_kahuna.getFreeDessert() };
//    return 0;
//}