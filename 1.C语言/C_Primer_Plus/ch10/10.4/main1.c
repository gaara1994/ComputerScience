#include <stdio.h>

int sum(int *arr, int len);

int sum(int *arr, int len)
{
    int res = 0;
    for (int i = 0; i < len; i++)
    {
        printf("当前元素%d\n", arr[i]);
        res = res + arr[i];
    }

    printf("数组的总和:%d\n", res);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    sum(arr, 5);
    return 0;
}
