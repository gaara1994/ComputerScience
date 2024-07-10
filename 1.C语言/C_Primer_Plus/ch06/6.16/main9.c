#include <stdio.h>
float GetRes(float f1, float f2);
int main(void)
{
    while (1)
    {
        float f1, f2, res;
        printf("请输入第一个数:\n");
        scanf("%f", &f1);

        printf("请输入第二个数:\n");
        scanf("%f", &f2);

        // 计算
        res = GetRes(f1, f2);
        printf("计算结果：%f\n", res);
    }

    return 0;
}

float GetRes(float f1, float f2)
{
    return (f1 - f2) / (f1 * f2);
}