#include "stdafx.h"
#include "convert.h"

using US = Currency<100,0,0,0,0,0,0>;
using AU = Currency<0,76,0,0,0,0,0>;
using NZ = Currency<0,0,71,0,0,0,0>;
using FJ = Currency<0,0,0,49,0,0,0>;
using TO = Currency<0,0,0,0,45,0,0>;
using PG = Currency<0,0,0,0,0,31,0>;
using SB = Currency<0,0,0,0,0,0,13>;

int main()
{
	US us;
	auto result = us.convert(5);
    return 0;
}

