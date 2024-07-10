#include <stdio.h>
/**
 * 函数通过数组指针修改数组
 *
 */
void change(const int arr[], int len);
void change(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i] + 1; // main2.c:11:16: error: assignment of read-only location ‘*(arr + (sizetype)((long unsigned int)i * 4))’
    }
}
int main(void)
{
    int arr[5] = {1, 3, 5, 7, 9};
    change(arr, 5);
    // 打印处理过的数组
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}