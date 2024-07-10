#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    // 将字符串"Bob"赋值给name
    strcpy(name, "Tom"); // 注意：这里使用了strcpy函数，它定义在string.h头文件中
    printf("name = %s\n", name);
    return 0;
}