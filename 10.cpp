#include<iostream>
int main()
{
	double x;
	std::cin >> x;
	if (x < 1.0)
	{
		std::cout << x << '\n';
	}
	else if (x >= 1.0 || x < 10.0)
	{
		std::cout << 2.0 * x - 1.0 << '\n';
	}
	else
	{
		std::cout << 3.0 * x - 1.0 << '\n';
	}
	std::cin.get();
}