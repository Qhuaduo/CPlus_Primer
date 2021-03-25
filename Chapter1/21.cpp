#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	// 若输入的成员 ISBN 不一样也会进行"加法"运算，最后会输出第一个成员的 ISBN
	std::cout << book1+book2 << std::endl;
	return 0;
}
