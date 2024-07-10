#include <stdio.h>

/**
 * 编写一个函数，把两个数组中相对应的元素相加，然后把结果储存 到第 3 个数组中。也就是说，
 * 如果数组1中包含的值是2、4、5、8，数组2中 包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。
 * 函数接 受3个数组名和一个数组大小。在一个简单的程序中测试该函数。
 */
void fun10(int arr1[], int arr2[], int arr3[], int len)
{
    for (int i = 0; i < len; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main(void)
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int arr3[5];
    fun10(arr1, arr2, arr3, 5);
    printf("%d\n", arr3[1]);

    return 0;
}