#include <stdio.h>
#include <string.h>

/**
 * 字符串函数
 * 3. strncat()函数 连接两个字符串
    strncat()函数是strcat()函数的安全版本，用于连接两个字符串，但会限制追加到目标字符串中的字符数量，以防止溢出。
 *
 */
int main()
{
    char dest[100] = "Hello";
    // char src[10] = "1234567890"; //这回导致异常
    char src[10] = "123456789";
    int availableLen = 100 - (strlen(dest) + 1);
    strncat(dest, src, availableLen);
    printf("%s\n", dest);
    return 0;
}