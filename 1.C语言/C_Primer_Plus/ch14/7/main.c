#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[20]; // 姓名
    int age;       // 年龄
    int gender;    // 性别
};

int main()
{
    // 在堆空间开辟内存
    struct person *p = NULL;
    p = malloc(sizeof(struct person));

    p->age = 35;
    printf("age = %d\n", p->age);

    free(p);
    return 0;
}