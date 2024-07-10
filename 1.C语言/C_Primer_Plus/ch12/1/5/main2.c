#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 用于 memset()
#include <unistd.h> // 用于 sleep()

#define MEM_BLOCK_SIZE (1024 * 1024 * 1024) // 定义每次分配1GB的内存

int main()
{
    void *ptr;
    size_t total_allocated = 0;

    while (1)
    {
        ptr = malloc(MEM_BLOCK_SIZE);
        if (ptr != NULL)
        {
            // 指针非空，说明分配成功
            total_allocated += MEM_BLOCK_SIZE;

            // 填充数据
            memset(ptr, 0, MEM_BLOCK_SIZE); // 将分配的内存填充为0

            printf("Allocated and filled %lu bytes. Total: %lu bytes.\n", MEM_BLOCK_SIZE, total_allocated);
        }
        else
        {
            // 内存分配失败
            printf("Memory allocation failed. Total allocated: %lu bytes.\n", total_allocated);
            break; // 结束循环
        }

        // 暂停1秒
        sleep(1);
    }

    // 通常情况下，你应该释放所有分配的内存，但在这个例子中，我们故意忽略这一点以演示内存耗尽
    // 请在实际编程中避免这样做！

    return 0;
}