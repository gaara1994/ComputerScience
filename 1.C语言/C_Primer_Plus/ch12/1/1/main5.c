#include <stdio.h>

/**
 * 5.块作用域
    1.这是局部作用域的一种特殊情况，指的是在一对花括号 {} 内定义的变量。
    2这种变量仅在包含它的代码块内部可见，一旦离开这个块，变量就不再可访问。
 */

void test()
{
    if (1)
    {
        int block = 100;
        printf("if块内访问：%d\n", block);
    }
    // printf("if块外访问：%d\n", block);//报错
}

int main()
{
    test();
    return 0;
}