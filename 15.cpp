#include<iostream>
void zuidagongyueshu(int a,int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	std::cout << a << '\n';
	
}
void zuixiaogongbeishu(int c, int d)
{
	int i = (c > d ? c : d);
	while (1)
	{
		if (i % c == 0 && i % d == 0)
		{
			break;
		}
		i++;
	}
	std::cout << i << '\n';
}
int main()
{
	int m, n;
	std::cin >> m >> n;
	zuidagongyueshu(m, n);
	zuixiaogongbeishu(m, n);
}