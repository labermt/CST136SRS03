#pragma once
//class Conversion
//{
//public:
//	Conversion();
//	virtual ~Conversion();
//};

template <typename C1, typename C2>
auto conversion(double amount)
{   // converts c2 rate into c1
	return C1::rate * amount / C2::rate;
}