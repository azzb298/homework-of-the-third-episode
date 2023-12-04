#include<iostream>
#include<iomanip>
int main()
{
	const double r = 1.5, h = 3, pai = 3.14,a = 1.33;
	double C, S, Sb, V, Vz;
	C = 2 * pai * r;
	S = pai * r * r;
	Sb = C * h + 2 * S;
	V = a * pai * r * r * r;
	Vz = S * h;
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) <<"圆的周长是" <<C << '\n' << "圆的面积是" << S << '\n' << "圆球的表面积是" << Sb << '\n' << "圆球的体积是" << V << '\n' << "圆柱的体积是" << Vz << '\n';
		return 0;	 
}
