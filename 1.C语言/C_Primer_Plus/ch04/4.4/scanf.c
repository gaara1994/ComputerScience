#include <stdio.h>

int main(void)
{
    int a;
    float b;
    char c;
    char str[20];

    printf("请输入一个整数\n");
    scanf("%d", &a);

    printf("请输入一个小数\n");
    scanf("%f", &b);

    printf("请输入一个字符\n");
    scanf(" %c", &c); // 注意%c前面的空格，用于跳过之前的任何空白字符（如换行符）

    printf("请输入字符串\n");
    scanf("%s", str);
    /*
    读取一个字符串（即一个字符数组）时，你不需要在数组变量前加上&符号。
    这是因为当数组名作为函数参数传递时，它会自动转换为一个指向数组首元素的指针。
    */
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);
    printf("str = %s\n", str);

    return 0;
}