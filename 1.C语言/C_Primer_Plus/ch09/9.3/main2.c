#include <stdio.h>

// 函数声明
void always_print(int n);

// 函数定义
int main(int a, int b)
{
	always_print(1);
}

void always_print(int n)
{

	if (n < 10)
	{
		printf("第%d次打印\n", n);
		always_print(n + 1);
	}
	else
	{
		printf("第%d次打印\n", n);
		printf("达到终止条件了\n");
	}
}
