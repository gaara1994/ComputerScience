#include <stdio.h>
#include <string.h>

struct person
{
    char name[20]; // 姓名
    int age;       // 年龄
    int gender;    // 性别
};

int main()
{
    struct person p1 =
        {
            "张三",
            18,
            1,
        };
    struct person p2 = p1;
    printf("p2.age = %d\n", p2.age);

    return 0;
}