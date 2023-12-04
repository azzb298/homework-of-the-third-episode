#include<iostream>
void weishu(int m)
{
	int i = 0;
	for(; i<6;)
	{
		if (!(m == 0))
		{
			m = m / 10;
			i++;
		}
		else
		{
			break;
		}
	}
	std::cout << i << std::endl;
}
void shuchu(int o)
{
	int a1, a2, a3, a4, a5;
	a1 = (o / 10000) % 10;
	a2 = (o / 1000) % 10;
	a3 = (o / 100) % 10;
	a4 = (o / 10) % 10;
	a5 = (o / 1) % 10;
	std::cout << a1 << a2 << a3 << a4 << a5 << '\n';
	if (o < 100000&&o>9999) 
	{
		std::cout << a5 << a4 << a3 << a2 << a1 << '\n';
	}
	else if (o < 10000 && o > 999)
	{
		std::cout << a5 << a4 << a3 << a2 << '\n';
	}
	else if (o < 1000 && o > 99)
	{
		std::cout << a5 << a4 << a3  << '\n';
	}
	else if (o < 100 && o > 9)
	{
		std::cout << a5 << a4 << '\n';
	}
	else 
	{
		std::cout << a5 << '\n';
	}
}
int main()
{
	int num;
	std::cin >> num;
	if (num >99999 || num < 0)
	{
		std::cout << "不可用" << '\n';
	}
	else
	{
		std::cout << "可用" << '\n';
		weishu(num);
		shuchu(num);
	}
	std::cin.get();
}