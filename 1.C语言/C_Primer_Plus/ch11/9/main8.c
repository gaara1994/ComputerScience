#include <stdio.h>
int main(void)
{
    char str1[] = "gawsie";
    char str2[] = "bletonism";
    char *ps;
    int i = 0;
    for (ps = str1; *ps != '\0'; ps++)
    {
        if (*ps == 'a' || *ps == 'e')
            putchar(*ps);
        else
            (*ps)--;
        putchar(*ps);
    }
    /**
     * 遇到了a或者e，打印该字符
       否则 字符的ascii位置-1，打印字符
       favrhe
     */
    putchar('\n');
    while (str2[i] != '\0')
    {
        printf("%c", i % 3 ? str2[i] : '*');
        ++i;
    }
    // i对3取模运算，如果不位0，打印str2[i],如果为0打印*
    /**
     * 012345678
       011011011
       *le*on*sm
     */
    return 0;
}