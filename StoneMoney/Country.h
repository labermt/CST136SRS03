#pragma once
//class Country
//{
//public:
//	Country();
//	virtual ~Country();
//};

class US //United States
{
public: 
	constexpr static double rate = 1.00;
};

class AU  //Aussie
{
public:
	constexpr static double rate = 0.76;
};

class NZ  //Kiwi
{
public:
	constexpr static double rate = 0.71;
};

class FJ  //Land of bottle water
{
public:
	constexpr static double rate = 0.49;
};

class TO
{
public:
	constexpr static double rate = 0.45;
};

class PG
{
public:
	constexpr static double rate = 0.31;
};

class SB
{
public:
	constexpr static double rate = 0.13;
}; 