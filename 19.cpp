#include<iostream>
int main()
{
	int i = 100;
	int a, b, c,m;
	for (; i <= 999; i++)
	{
		a = i % 10;        //个位数
		b = (i % 100) / 10;//十位数
		c = i / 100;       //百位数
		m = 100 * c + 10 * b + a;
		if (m == a * a * a + b * b * b + c * c * c)
		{
			std::cout << m << '\n';
		}
	}
	
}