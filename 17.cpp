#include<iostream>
void main()
{
	int a, n, t;
	std::cin >> a >> n;
	t = a;		
	std::cout << "Sn=";
	while (n > 0)
	{
		std::cout << t;
		a = a * 10;		
		t = t + a;
		n--;
		if (n != 0)
		{
			std::cout << "+" ;
		}
	}
}