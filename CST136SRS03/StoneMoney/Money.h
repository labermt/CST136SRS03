#pragma once
enum class CountryCode { US, AU, NZ, FJ, TO, PG, SB };

template<CountryCode CC, unsigned dollarAmount>
struct Money
{
public:
	Money()
		:value1{ CC }, value2{ dollarAmount }
	{
	}

	auto convert(CountryCode selectedCountry) const
	{
		const auto convertDecimal{ value2 * 0.01 };
		auto result{ convertUS(convertDecimal) };

		switch (selectedCountry)
		{
		case CountryCode::US:
			break;

		case CountryCode::AU:
			result = result / 0.76;
			break;

		case CountryCode::NZ:
			result = result / 0.71;
			break;

		case CountryCode::FJ:
			result = result / 0.49;
			break;

		case CountryCode::TO:
			result = result / 0.45;
			break;

		case CountryCode::PG:
			result = result / 0.31;
			break;

		case CountryCode::SB:
			result = result / 0.13;
			break;

		}

		return result;
	}

protected:

	auto convertUS(const double originalValue) const
	{
		auto result{ originalValue };

		switch (value1)
		{
		case CountryCode::US:
			break;

		case CountryCode::AU:
			result = originalValue * 0.76;
			break;

		case CountryCode::NZ:
			result = originalValue * 0.71;
			break;

		case CountryCode::FJ:
			result = originalValue * 0.49;
			break;

		case CountryCode::TO:
			result = originalValue * 0.45;
			break;

		case CountryCode::PG:
			result = originalValue * 0.31;
			break;

		case CountryCode::SB:
			result = originalValue * 0.13;
			break;

		}
		return result;
	}

private:

	const CountryCode value1;
	const unsigned value2;

};

