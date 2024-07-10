/**
 * 值传递2
 */
#include <stdlib.h>
#include <stdio.h>

void fun(int *tmp)
{
    printf("tmp = %p\n", tmp);
    // 通过指针修改保存的数值
    *tmp = 100;
}
int main()
{
    // 创建指针p
    int *p = NULL;
    p = malloc(sizeof(int));
    printf("p = %p\n", p);
    fun(p);
    printf("p = %p\n", p);
    printf("p的值 = %d\n", *p);

    return 0;
}