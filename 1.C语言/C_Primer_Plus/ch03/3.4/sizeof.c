#include <stdio.h>

int main(void)
{
    printf("int 的大小：%zd bytes\n", sizeof(int));
    printf("char 的大小：%zd bytes\n", sizeof(char));
    printf("long 的大小：%zd bytes\n", sizeof(long));
    printf("long long 的大小：%zd bytes\n", sizeof(long long));
    printf("double 的大小：%zd bytes\n", sizeof(double));
    printf("long double 的大小：%zd bytes\n", sizeof(long double));
    return 0;
}