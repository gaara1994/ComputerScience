#include <stdio.h>

int main(void)
{
    char ch;
    printf("请输入字符\n");

    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }

    return 0;
}