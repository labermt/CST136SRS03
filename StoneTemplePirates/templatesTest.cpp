//use enumeration to create a collection of valid countries

//create a generic conversion template that defines the expected
//format for all conversions. 

//since each exchangeRate is different, a specialized template
//is need for each country.

//constexpr tells the compiler that it is possible to evaluate
//the function at compile time.

//when a function is declared static, it is able to be called even
//if no class object has been instantiated. 

//template parameter can not be double, must be integral type

//currently only converts from USD

enum class Country
  {
    US, AU, NZ, FJ, TO, PG, SB
  };

template <Country C, int amount> struct Convert;


//repeat for each country code
template <int amount>
struct Convert <Country::AU, amount>
{
private:
  //based on USD : 1 AU == 0.76 USD
  static constexpr auto exchangeRate{0.76};
public:
  static constexpr auto conversion()
  {
    return amount / exchangeRate;
  }
};

int main()
{
  //since conversion was static, it can be called with the scope
  //resolution operator without the need for an object of that type
  //to be created.

  //stores amount in USD converted to AUD
  auto test{Convert<Country::AU, 20>::conversion()};
  return 0;
}
