#include <stdio.h>
// 静态全局变量，只能本文件使用。
static int count = 0;

void test()
{
	printf("test调用静态全局变量count，然后count++ ： %d\n", count);
	count++;
	printf("test() count++后 ： %d\n", count);
}
int main()
{
	test();

	printf("main调用静态全局变量count，然后count++ ： %d\n", count);
	count++;
	printf("main count++后 ： %d\n", count);

	test();
	test();

	return 0;
}
