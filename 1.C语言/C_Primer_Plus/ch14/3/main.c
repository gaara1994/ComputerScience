/**
 * 结构体指针使用
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
    Tom.age = 35;

    // 声明一个指向person结构体类型的指针
    struct person *ptr;
    // 指针赋值
    ptr = &Tom;

    // 通过指针访问结构体成员
    printf("name = %s\n", ptr->name);
    printf("age = %d\n", ptr->age);

    return 0;
}