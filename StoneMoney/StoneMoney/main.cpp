#include <iostream>

#include "currency.h"


//Everything in this program deals with cents. $1.45 = 145
int main() {
    //auto australia{Currency<Country::AU, 100>::value};
    //auto newZealand{Currency<Country::NZ, 647>::converted};
    //auto fiji{Currency<Country::FJ, 925>::value};
    auto usToAu{Currency<Country::US, Country::AU, 123>::converted};
    auto auToSb2{Currency<Country::AU, Country::SB, 876>::converted};
    
    return 0;
}

