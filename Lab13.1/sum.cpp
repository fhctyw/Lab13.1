//sum.cpp
#include <cmath>

#include "sum.h"
#include "dod.h"
#include "var.h"
using namespace nsVar;
using namespace nsDod;

namespace nsSum
{
	void sum()
	{
		n = 0;
		a = 1;
		S = a;
		do
		{
			n++;
			dod();
			S += a;
		} while (abs(a) >= eps);
	}
}