#include<iostream>

int main()
{
	int n = 0, m = 0;
	std::cout << "Please input two numbers : " << std::endl;
	std::cin >> n >> m;
	// 若输入的第一个数比第二个数小则交换它们的值
	// 若输入的第一个数比第二个数大则从大到小输出
	if(n < m)
	{
		int temp;
		temp = n;
		n = m;
		m = temp;
	}
	std::cout << "All integers in the range of these two numbers : ";
	while(n >= m){
		std::cout << n-- << " ";
	}
	std::cout << std::endl;

	return 0;
}
