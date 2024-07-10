/**
 * 传递结构体数组
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
    char name[50];
    int age;
};

void fun1(struct stu *const p)
{
    p = NULL; // 错误操作
    // 这个指针只能指向原来的内存地址，不能修改为别的地址。
}

void fun2(const struct stu *p)
{
    p->age = 18; // 错误操作
    // 这个指针指向的内容不能修改
}

void fun3(const struct stu *const p)
{
    // 都不能修改
}
int main()
{
    struct stu s;
    fun2(&s);
    return 0;
}