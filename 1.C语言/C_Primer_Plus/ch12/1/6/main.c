/**
 * 返回栈区地址
 */

#include <stdio.h>

// 返回int类型指针的函数
int *fun()
{
    // 创建局部变量，这个内存会在函数调用结束后被释放
    int a = 10;
    // 返回这个临时变量的内存地址
    return &a;
}

int main()
{
    int *p = NULL;
    p = fun();
    printf("指针的地址：%p\n", p); // nil

    *p = 100; //[1]    48110 segmentation fault (core dumped)  ./a.out
    return 0;
}

/**
 * main.c: In function ‘fun’:
 * main.c:13:12: warning: function returns address of local variable [-Wreturn-local-addr]
 * 13 |     return &a;
      |            ^~
 */