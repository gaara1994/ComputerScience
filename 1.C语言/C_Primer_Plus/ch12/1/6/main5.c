/**
 * 返回堆区地址
 */
#include <stdio.h>
#include <stdlib.h>

int *fun()
{
    int *tmp = NULL;
    tmp = malloc(sizeof(int));
    return tmp;
}

int main()
{
    int *p;
    p = fun();
    printf("p = %p\n", p);

    *p = 99;
    printf("*p = %d\n", *p);
    return 0;
}