#include <stdio.h>

// e.打印结果
// d.找出这15个数据中的最大值
// c.计算所有数据的平均值
// b.计算每组（5个）数据的平均值，返回一位数组

// a.把用户输入的数据储存在3×5的数组中
void getValue(int arr[][5], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
int main(void)
{
    int arr[3][5];
    getValue(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
