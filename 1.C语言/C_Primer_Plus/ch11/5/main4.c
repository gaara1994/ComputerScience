#include <stdio.h>
#include <string.h>

/**
 * 字符串函数
 * strcmp() 字符串比较函数
 *
 */
int main()
{
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";
    char str4[] = "ZXY";

    int res1 = strcmp(str1, str2);
    int res2 = strcmp(str1, str3);
    int res3 = strcmp(str1, str4);

    printf("%s 与 %s 的比较结果 %d\n", str1, str2, res1);
    printf("%s 与 %s 的比较结果 %d\n", str1, str3, res2);
    printf("%s 与 %s 的比较结果 %d\n", str1, str4, res3);

    return 0;
}