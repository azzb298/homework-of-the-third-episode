#include<iostream>
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		if (i % 2 != 0)
		{
			for (int a = 0; a < i; a++)
			{
				std::cout << "* ";
			}
			std::cout << '\n';
		}
		else
		{
			std::cout << '\n';
		}
        
	}
	for (int i = 6; i > 0; i--)
	{
		if (i % 2 != 0)
		{
			for (int a = 0; a < i; a++)
			{
				std::cout << "* ";

			}
			std::cout << '\n';
		}
		else
		{
			std::cout << '\n';
		}
	}
}