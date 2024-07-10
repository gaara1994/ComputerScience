#include <stdio.h>

// 静态变量在函数中定义，并且即使函数被多次调用，也只初始化一次
void func1()
{
	static int i; // 如果不赋值，数值类型会被系统赋值为0
	i++;
	printf("i = %d\n", i);
}
int main()
{
	func1(); // 1
	func1(); // 2
	func1(); // 3
	func1(); // 4

	return 0;
}
