#include<iostream>
#include<iomanip>
int main()
{
	const double a = 0.56;
	double f, c;
	std::cout << "请输入华氏度" << '\n';
	std::cin >> f;
	c = a * (f - 32);
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) <<"摄氏度为" << c << '\n';
	return 0;

}