#include <iostream>

#include "currency.h"

int main() {
    auto australia{Currency<Country::AU, 100>::value};
    auto newZealand{Currency<Country::NZ, 647>::value};
    auto fiji{Currency<Country::FJ, 925>::value};
    
    return 0;
}

