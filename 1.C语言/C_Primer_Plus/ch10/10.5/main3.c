#include <stdio.h>
/**
 * 三、取地址
 * *运算符给出指针指向地址存储的值
 */
int main(void)
{
    int age = 35;
    int *ptrAge = &age;

    printf("变量age的地址 = %p\n", &age);
    printf("变量ptrAge的地址 = %p\n", &ptrAge);
    return 0;
}