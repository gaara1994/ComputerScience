#include <stdio.h>

int main()
{

	// 三元运算符
	int a, res;

	scanf("%d", &a);

	res = a > 0 ? a : -a;
	printf("绝对值：%d\n", res);
	return 0;
}
