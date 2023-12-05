#include<iostream>
int main()
{
	double i = 0, a=1, b=0;
	for(;i<21;)
	{
		i++;
		a=a* i;
		b = b + a;
	}
	std::cout << b << '\n';
}