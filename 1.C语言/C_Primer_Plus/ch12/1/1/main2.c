#include <stdio.h>

/**
 * 2.函数原型作用域
    1.这个作用域适用于在函数原型中声明的形式参数
    2.形式参数在函数被调用时接收实参值，并在函数体内部作为局部变量使用。
 */

void test(int age)
{
    printf("年龄：%d\n", age);
}

int main()
{
    test(18);
    return 0;
}