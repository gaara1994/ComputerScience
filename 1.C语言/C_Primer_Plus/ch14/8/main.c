#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[20]; // 姓名
    char *city;    // 一级指针
};

int main()
{
    // 分配person结构体的内存
    struct person *p;
    p = malloc(sizeof(struct person));
    if (p == NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }

    strcpy(p->name, "张三");

    // 为city指针分配内存
    p->city = malloc(sizeof(50 * sizeof(50)));
    if (p->city == NULL)
    {
        free(p); // 出现异常导致city内存分配失败，后面也就无法操作city。所以释放p。也要打印日志记录下来。
        printf("内存分配失败\n");
        return 1;
    }

    strcpy(p->city, "北京");
    printf("%s\n", p->city);

    return 0;
}