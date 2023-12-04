#include<iostream>
void second(double a)
{
	int c;
	std::cin >> a;
	c = a / 100000;
	switch (c)
	{
	case 0:std::cout << a * 0.1 << '\n'; break;
	case 1:std::cout << (a - 10) * 0.75 + 1 << '\n'; break;
	case 2:
	case 3:std::cout << (a - 10) * 0.75 + 1 + (a - 20) * 0.05 << '\n'; break;
	case 4:
	case 5:std::cout << (a - 10) * 0.75 + 1 + (a - 20) * 0.05 + (a - 40) * 0.03 << '\n'; break;
	case 6:
	case 7:
	case 8:
	case 9:std::cout << (a - 10) * 0.75 + 1 + (a - 20) * 0.05 + (a - 40) * 0.03 + (a - 60) * 0.015 << '\n'; break;
	default:std::cout << (a - 10) * 0.75 + 1 + (a - 20) * 0.05 + (a - 40) * 0.03 + (a - 60) * 0.015 + (a - 100) * 0.01 << '\n'; break;
	}
}

int main()
{
	double i;
	std::cin >> i;
	if (i < 0)
	{
		std::cout << "error" << '\n';
		second(i);
	}
	else if (i <= 10)
	{
		std::cout << i * 0.1 << '\n';
	}
	else if (i <= 20)
	{
		std::cout << (i-10)*0.75+1 << '\n';
	}
	else if (i <= 40)
	{
		std::cout << (i - 10) * 0.75 + 1+(i-20)*0.05 << '\n';
	}
	else if (i <= 60)
	{
		std::cout << (i - 10) * 0.75 + 1 + (i - 20) * 0.05+(i-40)*0.03 << '\n';
	}
	else if (i <= 100)
	{
		std::cout<< (i - 10) * 0.75 + 1 + (i - 20) * 0.05 + (i - 40) * 0.03 +(i-60)*0.015<< '\n';
	}
	else 
	{
		std::cout << (i - 10) * 0.75 + 1 + (i - 20) * 0.05 + (i - 40) * 0.03 + (i - 60) * 0.015+(i-100)*0.01 << '\n';
	}
}

















