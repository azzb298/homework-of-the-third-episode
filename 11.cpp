#include<iostream>
int main()
{
	float a;
	for (;;)
	{
		std::cin >> a;
		if (a < 0 || a>100)
		{
			std::cout << "errror" << '\n';
		}
		else if (a >= 90)
		{
			std::cout << 'A' << '\n';
		}
		else if (a < 90 && a >= 80)
		{
			std::cout << 'B' << '\n';
		}
		else if (a < 80 && a >= 70)
		{
			std::cout << 'C' << '\n';
		}
		else if (a < 70 && a >= 60)
		{
			std::cout << 'D' << '\n';
		}
		else
		{
			std::cout << 'E' << '\n';

		}
	}
	std::cin.get();
}