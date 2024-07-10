#include <stdio.h>
int main(void)
{
    int i, ten;
    printf("请输入一个整数:\n");
    scanf("%d", &i);

    ten = i + 10; // +10
    while (i <= ten)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}