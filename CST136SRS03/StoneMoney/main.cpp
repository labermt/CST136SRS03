#include "stdafx.h"
#include "conversion.h"



int main()
{
	Country<double> wallet(10.0);
	wallet.result(US, NZ);
	//wallet.mult_exchange(4, FJ, NZ, US, TO);

	return 0;
}
