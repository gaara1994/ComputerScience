#include <stdio.h>
#include <string.h>/* 提供strlen()函数的原型 */

int main()
{
    char word[] = "Hello World!";
    printf("len = %ld\n", strlen(word)); // 12 .\0并没有算在内
    return 0;
}