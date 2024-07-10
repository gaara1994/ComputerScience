#include <stdio.h>
#include <string.h>

int main()
{
    // 1.以读的方式打开文件
    FILE *fp = fopen("./e.txt", "r");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }

    /**
     * 内容不在一行
root
pass123
     */

    char user[20];
    char password[50];

    fscanf(fp, "%s", user);
    fscanf(fp, "%s", password);

    printf("user = %s\n", user);
    printf("password = %s\n", password);
    // 4.关闭文件
    fclose(fp);
    return 0;
}