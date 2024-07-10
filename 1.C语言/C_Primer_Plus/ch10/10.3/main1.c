#include <stdio.h>

int main()
{
    int arr[4] = {15, 44, 8, 99};
    printf("arr的地址=%p\n", arr);
    printf("arr首元素地址=%p\t\n", &arr[0]);

    printf("打印每个元素的地址\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &arr[i]);
    }
    printf("======================\n");
    /**
        0x7ffe4b838040
        0x7ffe4b838044
        0x7ffe4b838048
        0x7ffe4b83804c
    */
    // 通过相邻地址的差发现，每个元素占用4个字节，字节byte是计算机基本的存储单元。

    // 通过第一个元素的地址指针，然后，对指针+1，遍历所有的元素
    int *ptr = arr;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("======================\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
