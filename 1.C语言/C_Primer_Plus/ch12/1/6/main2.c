/**
 * 返回data区地址
 */
#include <stdio.h>

// 返回指针的函数
int *fun()
{
    static int a = 10;
    return &a;
}

int main()
{
    // 调用函数,得到指针
    int *p;
    p = fun();
    printf("指针：%p\n", p);

    *p = 100;
    printf("指针：%p\n", p);
    printf("p = %d\n", *p);

    return 0;
}