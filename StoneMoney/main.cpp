#include "stdafx.h"
#include "convert.h"

//using US = Currency<Countries::US>;

//using US = Currency;

int main()
{
	Currency<Countries::US, 5> = us;
    return 0;
}

#include <tuple>

enum class Topping {kPepperoni, kCanadianBacon, kPineapple, kOlives};
using DoubleTopping = std::tuple<Topping, Topping>;
constexpr DoubleTopping kHawaiian{ Topping::kPineapple, Topping::kCanadianBacon };

template<class Topping, unsigned Inch = 8U>
struct Pizza
{
public:
    auto getFreeDessert() const
    {
        return false;
    };
};

template<unsigned Inch>
struct Pizza<DoubleTopping, Inch>
{
public:
    Pizza(DoubleTopping topping): topping_{topping}
    {
    }

    auto getFreeDessert() const
    {
        return true;
    };

private:
    const DoubleTopping topping_;
};

template<class Topping>
struct Pizza<Topping , 16>
{
public:
    auto getFreeAntacid() const
    {
        return true;
    };
};

int main_2()
{
    const auto big_kahuna{ Pizza<DoubleTopping, 32>{ kHawaiian } };
    const auto isFree{ big_kahuna.getFreeDessert() };
    return 0;
}