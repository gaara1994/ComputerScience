/**
 * 结构体嵌套
 */
#include <stdio.h>
#include <string.h>

// 子结构体一定要先声明
struct addrInfo
{
    char province[100]; // 省
    char city[100];     // 市
    char district[100]; // 区
};

struct person
{
    char name[20];        // 姓名
    int age;              // 年龄
    int gender;           // 性别
    struct addrInfo addr; // 住址
};

int main()
{
    struct person p1 =
        {
            "张三",
            18,
            1,
            {"河北省", "廊坊市", "广阳区"}};

    printf("p1的地址：%s %s %s\n", p1.addr.province, p1.addr.city, p1.addr.district);
    return 0;
}