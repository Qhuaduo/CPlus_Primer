#include<iostream>

int main()
{
	// 1.9
	int sum = 0;
	for(int i=50; i<101; i++)
		sum += i;
	std::cout << "1.9: " << sum << std::endl;
	
	// 1.10
	std::cout << "1.10: ";
	for(int i=10; i>=0; i--)
		std::cout << i << " ";
	std::cout << std::endl;
	
	// 1.11
	int min = 0, max = 0;
	std::cout << "1.11 Please input two numbers : ";
	std::cin >> min >> max;
	if(min > max)
	{
		int temp = min;
		min = max;
		max = temp;
	}
	std::cout << "All integers in the range of these two numbers : ";
	while(min <= max){
		std::cout << min++ << " ";
	}
	std::cout << std::endl;
	return 0;
}
