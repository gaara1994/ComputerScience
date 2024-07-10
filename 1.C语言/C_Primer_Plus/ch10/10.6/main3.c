#include <stdio.h>
/**
 * 函数通过数组指针修改数组
 *
 */
void use_only(const int arr[], int len);
void use_only(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // 只使用数组
        printf("%d\n", arr[i]);
    }
}
int main(void)
{
    int arr[5] = {1, 3, 5, 7, 9};
    use_only(arr, 5);
    return 0;
}