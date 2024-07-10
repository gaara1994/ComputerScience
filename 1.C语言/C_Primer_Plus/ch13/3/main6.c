#include <stdio.h>
#include <string.h>

int main()
{
    // 1.以读的方式打开文件
    FILE *fp = fopen("./c.txt", "r");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }

    // 2.准备容器
    char str[100];
    fgets(str, sizeof(str) - 1, fp);

    // 3.打印
    printf("str: %s\n", str);

    // 4.关闭文件
    fclose(fp);
    return 0;
}