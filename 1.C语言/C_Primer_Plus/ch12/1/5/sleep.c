#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // 对于Unix/Linux系统，提供sleep函数

int main()
{
    // 申请大约2GB的内存（加上一些额外的内存以防万一）
    void *ptr = malloc(2ULL * 1024 * 1024 * 1024 + 1024 * 1024);
    if (ptr == NULL)
    {
        perror("malloc failed");
        return EXIT_FAILURE;
    }

    printf("Allocated %zu bytes of memory.\n", (size_t)(2ULL * 1024 * 1024 * 1024 + 1024 * 1024));

    // 睡眠10秒
    printf("Sleeping for 10 seconds...\n");
    sleep(10);

    // 填充内存为1
    // 使用size_t来避免整数溢出
    size_t numBytes = 5 * 1024 * 1024 * 1024; // 只填充2GB，不考虑额外申请的内存
    memset(ptr, 1, numBytes);
    printf("Memory filled with 1s (up to 2GB).\n");

    // 注意：如果您想填充整个分配的内存（包括额外的1MB），您应该这样做：
    // size_t totalBytes = (size_t)(2ULL * 1024 * 1024 * 1024 + 1024 * 1024);
    // memset(ptr, 1, totalBytes);

    // 再次睡眠10秒
    printf("Sleeping for another 10 seconds...\n");
    sleep(10);

    // 释放内存
    free(ptr);
    printf("Memory freed.\n");

    return 0;
}