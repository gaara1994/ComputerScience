#include <stdio.h>
#include <string.h>

int main()
{
    // 1.以读的方式打开文件
    FILE *fp = fopen("./d.txt", "r");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }
    int a, b;
    float c;
    // 内容都在一行，它默认会跳过任意数量的空白字符（包括空格、制表符、换行符等），直到遇到第一个非空白字符
    fscanf(fp, "%d %d %f", &a, &b, &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %f\n", c);

    // 4.关闭文件
    fclose(fp);
    return 0;
}