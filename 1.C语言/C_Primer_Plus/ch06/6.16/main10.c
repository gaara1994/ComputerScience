#include <stdio.h>

int main(void)
{
    while (1)
    {
        int upperLimit, lowerLimit;
        int squareSum = 0;

        printf("请输入下限整数:\n");
        scanf("%d", &upperLimit);
        printf("请输入上限整数:\n");
        scanf("%d", &lowerLimit);

        if (upperLimit <= lowerLimit)
        {
            for (int i = upperLimit; i < lowerLimit; i++)
            {
                squareSum = i * i + squareSum;
            }
            printf("计算结果:%d\n", squareSum);
        }
        else
        {
            printf("输入顺序错误\n");
        }
    }

    return 0;
}