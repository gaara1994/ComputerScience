#include <stdio.h>
#include <string.h>

/**
 * 字符串函数
 * 符串复制函数
 * strcpy()和strncpy()
 * 覆盖行为
 *
 * strcpy()简单易用，但需要程序员确保目标缓冲区足够大，以避免缓冲区溢出。
 * strncpy()提供了限制复制字符数的能力，增加了安全性，
 * 但使用时需注意目标字符串可能不会自动补全\0的问题，需要额外处理以确保字符串的完整性。
 *
 */
int main()
{
    char status[10] = "Running";

    strcpy(status, "Stopping");

    printf("status : %s\n", status);

    strncpy(status, "Pendding123456789", 10);
    printf("status : %s\n", status);

    return 0;
}