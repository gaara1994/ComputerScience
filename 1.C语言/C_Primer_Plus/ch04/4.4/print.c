#include <stdio.h>
/*
    printf()的修饰符

*/
int main(void)
{
    char a[] = "Hello";

    // -    字符串左对齐
    printf("%-20s\n", a);

    // +    有符号数
    int b = 99;
    int c = -99;
    printf("%+d\n", b);
    printf("%+d\n", c);

    float f1 = 20112.71828;
    printf("%f\n", f1); // 20112.718750
    // 数字 最小字段宽度
    printf("%30f\n", f1); //                  20112.718750
    // .数字 精度修饰符，保留小数位数
    printf("%.2f\n", f1); // 20112.72

    return 0;
}