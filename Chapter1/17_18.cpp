#include <iostream>
/*
* 若都相等，则仅会输出一次输入值与其计数结果
* 若无重复值，则每次输出该输入值且计数结果为 1
*               (每次输入后空格输入，则会一下子全部输出；
*					若为回车，则会在第二次回车后的每次回车输出上次输入的数值)
*/
int main()
{
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;

	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1;  // store the count for the current value we're processing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal)   // if the values are the same
				++cnt;            // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs "
				          << cnt << " times" << std::endl;
				currVal = val;    // remember the new value
				cnt = 1;          // reset the counter
			}
		}  // while loop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal << " occurs "
		          << cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}
