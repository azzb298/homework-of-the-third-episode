#include<iostream>
int main()
{
	char c1,c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
	std::cout << c1 <<c2<< '\n';//std::cout << 'c1' <<'c2'<< '\n';
	return 0;
}