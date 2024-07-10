#include <stdio.h>

int main()
{
    // 定义一个字符数组（字符串）name并初始化其值为"Bob"
    char name[] = "Bob";
    printf("name = %s\n", name); // 注意：这里不需要指定数组的大小，因为编译器会自动计算
    return 0;
}