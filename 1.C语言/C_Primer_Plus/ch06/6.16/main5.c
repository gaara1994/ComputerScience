#include <stdio.h>
/*
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
int main(void)
{
    char c;
    printf("请输入大写字母:\n");
    scanf("%c", &c);
    if (c >= 'A' && c < 'A' + 26)
    {
        // 需要打印的行数和列数
        int line = c - 'A';
        printf("line = %d\n", line);
        for (int i = 0; i <= line; i++)
        {
        }
    }
    else
    {
        printf("输入错误\n");
    }

    return 0;
}