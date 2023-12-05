#include<iostream>
#include<cmath>
int main()
{
	double x1, x2;
	double a;
	std::cin >> a;
	x2 = 1.0;
	for (;;)
	{
		x1 = x2;
		x2 = (x1 + a / x1) / 2.0;
		if (fabs(x1 - x2) < 1e-6)
		{
			std::cout << x2 << '\n';
			break;
		}
	}
	return 0;
}