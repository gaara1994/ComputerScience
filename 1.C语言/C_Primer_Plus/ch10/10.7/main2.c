#include <stdio.h>
/**
 * 指针的兼容性
 *
 */

int main(void)
{

    // 1.不用类型转换，int类型的值可以赋值给double类型的变量
    int age = 18;
    double price;
    price = age;
    printf("%f\n", price); // 18.000000

    // 2.但是不同类型的指针，*int类型的值不能赋值给*double类型的变量。
    int *ptrI = &age;
    double *ptrD;
    ptrD = ptrI; // 编译错误
    return 0;
}