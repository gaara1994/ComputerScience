#include <stdio.h>

int main()
{
    int age;
    int *ptr1;

    printf("ptr1的初始值%p\n", ptr1);
    age = 35;
    ptr1 = &age;
    printf("ptr1赋值后值%p\n", ptr1);
    printf("通过ptr1取值%d\n", *ptr1);

    // 更改age变量
    age = 18;
    printf("age修改之后，ptr1的值存储的地址 %p\n", ptr1);
    printf("age修改之后，通过ptr1取值%d\n", *ptr1);

    // 通过ptr1直接修改内存中的值
    *ptr1 = 17;
    printf("通过ptr1直接修改内存中的值之后，ptr1的值存储的地址 %p\n", ptr1);
    printf("通过ptr1直接修改内存中的值之后，通过ptr1取值%d\n", *ptr1);
    printf("通过ptr1直接修改内存中的值之后，age的值%d\n", age);

    return 0;
}