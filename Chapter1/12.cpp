#include<iostream>
/*
*   for 循环完成了对 -100 到 100 的求和
*   sum 终值为 0
*/
int main()
{
	int sum = 0;
	for(int i=-100; i<=100; ++i)
		sum += i;
	std::cout << sum << std::endl;
	return 0;
}
