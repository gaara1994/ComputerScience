#include <stdio.h>

union Data
{
    int a;
    float b;
    char c;
};

int main()
{
    union Data data;
    // 1.先打印三个成员的地址
    printf("&a = %p\n", &data.a); //&a = 0x7ffd9ba081e4
    printf("&b = %p\n", &data.b); //&b = 0x7ffd9ba081e4
    printf("&c = %p\n", &data.c); //&c = 0x7ffd9ba081e4

    // 2.使用int类型的a
    data.a = 35;
    data.b = 3.14;

    printf("&a = %p\n", &data.a); //&a = 0x7ffd9ba081e4
    printf("&b = %p\n", &data.b); //&b = 0x7ffd9ba081e4
    printf("&c = %p\n", &data.c); //&c = 0x7ffd9ba081e4

    printf("b = %f\n", data.b); // b = 3.140000
    printf("a = %d\n", data.a); // 此时再读取其他成员,得到一个随机的或不可预测的整数值.

    return 0;
}