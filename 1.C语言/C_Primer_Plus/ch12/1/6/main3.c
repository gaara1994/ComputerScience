/**
 * 值传递1
 */
#include <stdlib.h>
#include <stdio.h>

int *fun(int *tmp)
{
    printf("tmp = %p\n", tmp); // nil
    // 局部变量tmp重新赋值
    tmp = malloc(sizeof(int) * 5);
    printf("tmp = %p\n", tmp); // 0x5612237e86b0
}

int main()
{
    int *p = NULL;
    printf("%p\n", p); // nil
    fun(p);
    printf("函数调用结束后p = %p\n", p); // nil

    return 0;
}