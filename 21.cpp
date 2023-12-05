#include<iostream>
int main()
{
	double fengzi=2, fengmu=1;
	double n, sum=0;
	n = fengzi / fengmu;
	for (int i = 1; i <= 20; i++)
	{
		fengzi = fengmu + fengzi;
		fengmu = fengzi - fengmu;
		sum = sum + n;
		n = fengzi / fengmu;
	}
	std::cout << sum;
}