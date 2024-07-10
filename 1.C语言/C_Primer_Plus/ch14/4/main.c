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
    // 定义含有3个元素的结构体数组
    struct person student[3];
    // 赋值
    strcpy(student[0].name, "张三");
    student[0].age = 18;

    strcpy(student[1].name, "李四");
    student[1].age = 17;

    strcpy(student[2].name, "王五");
    student[2].age = 19;

    int ageSum;
    for (int i = 0; i < 3; i++)
    {
        ageSum = ageSum + student[i].age;
    }

    printf("年龄总和: %d\n", ageSum);

    return 0;
}