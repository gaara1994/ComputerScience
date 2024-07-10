#include <stdio.h> //预处理器指令，引入C库文件 /usr/include/stdio.h

int main(void)
{
    int num;                   // 定义一个名为 num 的变量
    num = 1;                   // 为num变量赋值 1
    printf("hello world!\n");  // 打印
    printf("num = %d\n", num); // 打印 num
    return 0;
}

// gcc main.c 编译
// ./a.out    运行