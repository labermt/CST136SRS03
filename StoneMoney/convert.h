#pragma once
#include "stdafx.h"

template<class From, class To>
To convert(From old_ammount, From old_type, To new_type)
{
	enum type { US = 1.0, AU = .76, NZ = .71, FJ = .49, TO = .45, PG = .31, SB = .13 };


	return old_ammount * new_type;

}
