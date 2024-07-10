/**
 * 传递结构体指针
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
    char name[50]; // 姓名
    int age;       // 年龄
    int adult;     // 成年
};

void set_adult(struct stu *s)
{
    if (s->age >= 18)
    {
        s->adult = 1;
    }
}

int main()
{
    struct stu s1 = {"张三", 18};
    printf("年龄：%d\n", s1.age);
    set_adult(&s1);
    printf("s1:%d\n", s1.adult); // 指针传递修改了结构体变量

    return 0;
}