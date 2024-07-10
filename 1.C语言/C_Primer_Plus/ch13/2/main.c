#include <stdio.h>

int main()
{
    FILE *fp = fopen("./a.txt", "r"); // 以只读模式打开 a.txt

    // 关闭文件
    fclose(fp);
    return 0;
}