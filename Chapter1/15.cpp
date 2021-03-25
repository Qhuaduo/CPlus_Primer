#include<iostream>

// 错误：main 的参数列表漏掉
int main( //)       // [Error] expected ')' at end of input
{
	// 错误：endl 后使用冒号而非分号
	std::cout << "Read each file. " << std::endl:// [Error] expected ';' before ':' token
	// 错误：字符串字面变量两侧要使用分号
	std::cout << Update master. << std::endl;   // [Error] 'Update' was not declared in this scope
    // 错误：return 语句漏掉 ;
	return 0        // [Error] expected ';' before '}' token
}
