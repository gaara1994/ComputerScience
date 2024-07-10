#include <stdio.h>
#include <math.h>

int main(void)
{
    int start, end;
    printf("请输入范围起点:\n");
    scanf("%d", &start);
    printf("请输入范围终点:\n");
    scanf("%d", &end);
    if (start <= end)
    {
        printf("%-10s %-10s %-10s\n", "数字", "平方", "立方");

        for (int i = 0; i <= end - start; i++)
        {
            printf("%-10d %-10d %-10d\n", start + i, (start + i) * (start + i), (start + i) * (start + i) * (start + i));
        }
    }
    else
    {
        printf("顺序错了\n");
    }

    return 0;
}