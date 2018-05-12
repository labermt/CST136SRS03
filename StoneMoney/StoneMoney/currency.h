#ifndef currency_h
#define currency_h

#include "country.h"

//Make compiler get mad at you if you have a country that you don't have!

template <Country C, int Money> class Currency;

//Base conversion of US dollars
template <int Money>
class Currency<Country::US, Money>
{
public:
    static constexpr int value{Money};
};


template <int Money>
class Currency<Country::AU, Money>
{
private:
    static constexpr int conversion{76};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion ;
    }
    static constexpr int value{usConversion()};

};


template <int Money>
class Currency<Country::NZ, Money>
{
private:
    static constexpr int conversion{71};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
};


template <int Money>
class Currency<Country::FJ, Money>
{
private:
    static constexpr int conversion{49};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
};


template <int Money>
class Currency<Country::TO, Money>
{
private:
    static constexpr int conversion{45};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
};


template <int Money>
class Currency<Country::PG, Money>
{
private:
    static constexpr int conversion{31};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
};


template <int Money>
class Currency<Country::SB, Money>
{
private:
    static constexpr int conversion{13};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
};



#endif























