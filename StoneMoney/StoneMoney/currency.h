#ifndef currency_h
#define currency_h

#include "country.h"

//
//Conversions from US to other countries
//

template <Country C, int Money> class Converted;

template <int Money>
class Converted<Country::AU, Money>
{
private:
    static constexpr int conversion{76};
    
public:
    static constexpr int usToAu()
    {
        return (Money * conversion) / 100;
    }
    static constexpr int value{usToAu()};
};



template <int Money>
class Converted<Country::NZ, Money>
{
private:
    static constexpr int conversion{71};
    
public:
    static constexpr int usToNz()
    {
        return (Money * conversion) / 100;
    }
    static constexpr int value{usToNz()};
};



template <int Money>
class Converted<Country::FJ, Money>
{
private:
    static constexpr int conversion{49};
    
public:
    static constexpr int usToFj()
    {
        return (Money * conversion) / 100;
    }
    static constexpr int value{usToFj()};
};



template <int Money>
class Converted<Country::TO, Money>
{
private:
    static constexpr int conversion{45};
    
public:
    static constexpr int usToTo()
    {
        return (Money * conversion) / 100;
    }
    static constexpr int value{usToTo()};
};



template <int Money>
class Converted<Country::PG, Money>
{
private:
    static constexpr int conversion{31};
    
public:
    static constexpr int usToPg()
    {
        return (Money * conversion) / 100;
    }
    static constexpr int value{usToPg()};
};



template <int Money>
class Converted<Country::SB, Money>
{
private:
    static constexpr int conversion{13};
    
public:
    static constexpr int usToSb()
    {
        return (Money * conversion) / 100;
    }
    static constexpr int value{usToSb()};
};


//
//Conversions to US currency
//

template <Country C, Country Co, int Money> class Currency;

//Base conversion of US dollars
template <Country Co, int Money>
class Currency<Country::US, Co, Money>
{
public:
    static constexpr int value{Money};
    static constexpr int converted{Converted<Co, value>::value};
};


template <Country Co, int Money>
class Currency<Country::AU, Co, Money>
{
private:
    static constexpr int conversion{76};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion ;
    }
    static constexpr int value{usConversion()};
    static constexpr int converted{Converted<Co, value>::value};
};



template <Country Co, int Money>
class Currency<Country::NZ, Co, Money>
{
private:
    static constexpr int conversion{71};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
    static constexpr int converted{Converted<Co, value>::value};
};



template <Country Co, int Money>
class Currency<Country::FJ, Co, Money>
{
private:
    static constexpr int conversion{49};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
    static constexpr int converted{Converted<Co, value>::value};
};



template <Country Co, int Money>
class Currency<Country::TO, Co, Money>
{
private:
    static constexpr int conversion{45};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
    static constexpr int converted{Converted<Co, value>::value};
};


template <Country Co, int Money>
class Currency<Country::PG, Co, Money>
{
private:
    static constexpr int conversion{31};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
    static constexpr int converted{Converted<Co, value>::value};
};



template <Country Co, int Money>
class Currency<Country::SB, Co, Money>
{
private:
    static constexpr int conversion{13};
    
public:
    static constexpr int usConversion()
    {
        return (Money * 100) / conversion;
    }
    static constexpr int value{usConversion()};
    static constexpr int converted{Converted<Co, value>::value};
};



#endif























