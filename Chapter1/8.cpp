#include<iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
//	std::cout << /* "*/" */;    // �������䲻�Ϸ����޸�ǰ
	std::cout << /* "*/" */";   // �޸ĺ�
	std::cout << /* "*/" /* "/*" */;
	return 0;
}
