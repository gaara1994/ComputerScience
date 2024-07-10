#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Hello";
    char str2[10] = "HelLo";
    char str3[10] = "Hello";

    int res = memcmp(str1, str2, sizeof(str1) - 1);
    printf("比较结果：%d\n", res);

    int res2 = memcmp(str1, str3, sizeof(str1) - 1);
    printf("比较结果2：%d\n", res2);

    return 0;
}