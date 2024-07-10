#include <stdio.h>

int main()
{
    // 声明数组
    int age[10];   // 含有10个int类型元素的数组
    char code[12]; // 含有12个char类型元素的数组

    // 初始化数组
    float price[3] = {3.14, 2.71828, 1.8};

    // 遍历数组
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", price[i]);
    }
    printf("================================\n");

    // 修改数组中的值
    price[2] = 998;
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", price[i]);
    }

    printf("================================\n");
    // 创建只读数组
    const int status[2] = {200, 404};
    // status[1] = 100; assignment of read-only location ‘status[1]’
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", status[i]);
    }
}
