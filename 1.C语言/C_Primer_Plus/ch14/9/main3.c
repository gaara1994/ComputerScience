/**
 * 传递结构体数组
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

void set_stu(struct stu *s_arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        s_arr[i].age = i;
    }
}
int main()
{
    struct stu s_arr[3] = {0};
    set_stu(s_arr, sizeof(s_arr) / sizeof(struct stu)); // 结构体数组 / 一个结构体

    printf("%d\n", s_arr[0].age);
    printf("%d\n", s_arr[1].age);
    printf("%d\n", s_arr[2].age);

    return 0;
}