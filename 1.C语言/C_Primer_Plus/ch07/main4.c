#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int arr[10];
	srand(time(NULL)); // 使用当前时间作为随机数生成器的种子

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand(); // 现在可以开始使用rand()生成随机数了
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 1000000) // 大于一百万
		{
			printf("%d\n", arr[i]);
			break;
		}
	}

	return 0;
}
