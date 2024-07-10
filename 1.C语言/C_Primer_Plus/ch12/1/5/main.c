#include <stdio.h>

int main()
{
    // 尝试在栈上分配一个非常大的数组
    char very_large_array[10000000]; // 这个大小取决于你的系统和栈大小配置

    // 这里做一些操作，但实际上在分配这么大的数组后程序很可能已经崩溃
    printf("Array allocated successfully.\n");

    return 0;
}