#include<iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
//	std::cout << /* "*/" */;    // 该输出语句不合法，修改前
	std::cout << /* "*/" */";   // 修改后
	std::cout << /* "*/" /* "/*" */;
	return 0;
}
