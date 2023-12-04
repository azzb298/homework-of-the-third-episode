#include<iostream>
void result(bool logic)
{
	std::cout << logic <<std::endl;
}
int main()
{
	int x=3, y=3;
	const int a = 3, b = 4, c = 5;
	result(a+b>c&&b==c);
	result(a||b+c&&b-c);
	result(!(a>b)&&!c||1);
	result(!(x==a)&&(y==b)&&0);
	result(!(a+b)+c-1&&b+c/2);
	std::cin.get();
}