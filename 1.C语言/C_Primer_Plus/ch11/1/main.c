#include <stdio.h>

/**
 * 1.字符串字面量（字符串常量）
 * 双引号括起来的内容称为字符串字面量，也叫做字符串常量。
 * 编译器会在字符串末尾自动添加 \0,一起存储在内存中。
 *
 *
 * 2.字符串数组和初始化
 *
 */
int main()
{
    // 1.字符串字面量
    printf("%s\n", "Hello World!");

    // 2.字符串数组和初始化
    char greeting[12] = "Hello World!";
    printf("%s", greeting);

    // 3.声明字符串变量时候就要指定数组大小了
    char str2[6];
    printf("%s", str2);

    return 0;
}