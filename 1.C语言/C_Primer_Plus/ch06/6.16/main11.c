#include <stdio.h>

int main(void)
{
    int arr[8];
    printf("请输入8个整数\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("倒序打印\n");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}