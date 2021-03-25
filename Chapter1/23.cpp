#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book1, book2;
	if(std::cin >> book1)
	{
		int count = 1;
		while(std::cin >> book2){
			if(book1.isbn() == book2.isbn())
				count++;
			else
			{
				std::cout << book1 << " occurs "
						<< count << " times " << std::endl;
				book1 = book2;  // 记住新值
				count = 1;  // 重置计数器
			}
		}
		// 不要忘记处理最后一个数据
		std::cout << book1 << " occurs "
					<< count << " times " << std::endl;
	}
	
	return 0;
}
