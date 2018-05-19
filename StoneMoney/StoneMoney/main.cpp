#include <iostream>

#include "currency.h"


//Everything in this program deals with cents. $1.45 = 145
int main() {
    auto usToAu{Currency<Country::US, Country::AU, 123>::converted};
    auto auToSb{Currency<Country::AU, Country::SB, 876>::converted};
    auto fjToTo{Currency<Country::FJ, Country::TO, 532>::converted};
    
    
    return 0;
}

