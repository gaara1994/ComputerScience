#include <stdio.h>
/**
 * 二、取值
 * *运算符给出指针指向地址存储的值
 */
int main(void)
{
    int age = 35;
    int *ptrAge = &age;

    printf("age = %d\n", *ptrAge);
    return 0;
}