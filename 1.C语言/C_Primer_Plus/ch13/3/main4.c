#include <stdio.h>
#include <string.h>

int main()
{
    // 1.以读的方式打开文件
    FILE *fp = fopen("./b.txt", "r");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}