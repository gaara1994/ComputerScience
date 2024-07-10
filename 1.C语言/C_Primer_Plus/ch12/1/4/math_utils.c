#include <stdio.h>

// 定义一个内部链接的变量  
static int internal_counter = 0;

// 定义一个内部链接的函数 
static void increment_counter(){
    internal_counter++;
    printf("计数器增加到%d\n",internal_counter);
}

// 定义一个外部链接的函数（为了演示），它调用内部链接的函数  
void public_function(){
    increment_counter(); // 可以访问，因为它们在同一个编译单元内  
}