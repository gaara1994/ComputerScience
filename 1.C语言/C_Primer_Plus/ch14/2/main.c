/**
 * 结构体定义
 */
#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];  // 姓名
    int age;        // 年龄
    char addr[100]; // 地址
    int gender;     // 性别
};

int main()
{
    // 声明结构体变量
    struct person Tom;
    // 赋值
    strcpy(Tom.name, "Tom");
    Tom.age = 18;
    // 使用
    printf("name = %s\n", Tom.name);
    printf("age = %d\n", Tom.age);

    return 0;
}