#include <stdio.h>

int main()
{
	int grade;
	while (1)
	{
		printf("请输入分数\n");
		scanf("%d", &grade);
		if (grade >= 60)
		{
			printf("合格\n");
		}
		else
		{
			continue;
		}
	}

	return 0;
}
