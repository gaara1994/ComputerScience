/**
 * 值传递结构体变量
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

void print_adult(struct stu s)
{
    if (s.age >= 18)
    {
        s.adult = 1;
        printf("s:%d\n", s.adult);
    }
}

int main()
{
    struct stu s1 = {"张三", 18};
    printf("年龄：%d\n", s1.age);

    print_adult(s1);
    printf("s1:%d\n", s1.adult); // 值传递无法修改变量

    return 0;
}