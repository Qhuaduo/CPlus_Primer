#include<iostream>

// 不合法
int main()
{
	int v1 = 3, v2 = 4;
	std::cout << "The sum of " << v1    // 去除这里的分号
				<< " and " << v2        // 去除这里的分号
				<< " is " << v1 + v2 << std::endl;
	return 0;
}
