#include <stdio.h>
int age = 18;	  // 全局变量age定义在main.c中
extern int add(); // 声明add函数，它在utils.c中定义
int main()
{
	printf("Before add: age = %d\n", age);
	int newAge = add(); // 调用add函数
	printf("After add: age = %d\n", age);
	return 0;
}