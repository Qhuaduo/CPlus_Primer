#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	// ������ĳ�Ա ISBN ��һ��Ҳ�����"�ӷ�"���㣬���������һ����Ա�� ISBN
	std::cout << book1+book2 << std::endl;
	return 0;
}
