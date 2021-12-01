#include <iostream>
#include <cmath>
#include <iomanip>

#include "var.h"
#include "dod.h"
#include "sum.h"

using namespace std;

using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

void main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> eps;

	cout << fixed;
	cout << "----------------------------------" << endl;
	cout << "|" << setw(7) << "x|"
		<< setw(11) << "exp(-x^2)|"
		<< setw(11) << "S|"
		<< setw(4) << "n|" << endl;
	cout << "----------------------------------" << endl;

	for (x = xp; x <= xk; x += dx)
	{
		sum();

		cout << "|" << setw(6) << setprecision(2) << x << "|"
			<< setw(10) << setprecision(4) << exp(-(x * x)) << "|"
			<< setw(10) << setprecision(4) << S << "|"
			<< setw(3) << n << "|" << endl;
	}
	cout << "----------------------------------" << endl;
}