#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book1, book2;
	// 读取多个具有相同 ISBN 的销售记录
	if(std::cin >> book1)
    {
		while(std::cin >> book2){
			// 即使 ISBN 不同依旧会进行"加法"运算
			book1 += book2;
		}
		std::cout << book1 << std::endl;
	}
	else
		std::cout << "Wrong Input!" << std::endl;
	
	return 0;
}
