#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book1, book2;
	// ��ȡ���������ͬ ISBN �����ۼ�¼
	if(std::cin >> book1)
    {
		while(std::cin >> book2){
			// ��ʹ ISBN ��ͬ���ɻ����"�ӷ�"����
			book1 += book2;
		}
		std::cout << book1 << std::endl;
	}
	else
		std::cout << "Wrong Input!" << std::endl;
	
	return 0;
}
