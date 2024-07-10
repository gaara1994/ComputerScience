#include <stdio.h>
//全局变量
double  PI = 3.14;

void test(){
	printf("test调用全局变量PI： %f",PI);
}
int main(){
	printf("main函数调用PI: %f\n",PI);

	test();
	return 0;
}
