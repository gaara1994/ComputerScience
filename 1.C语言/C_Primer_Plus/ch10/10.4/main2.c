#include <stdio.h>

#define SIZE 10

int sum(int *start, int *end);

int sum(int *start, int *end)
{
    int res = 0;
    while (start < end)
    {
        res = res + *start;
        start++;
    }

    printf("数组的总和:%d\n", res);
}
int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printf("第1个元素地址:%p\n", arr);
    printf("第2个元素地址:%p\n", arr + 1);
    printf("第3个元素地址:%p\n", arr + 2);
    printf("第4个元素地址:%p\n", arr + 3);
    sum(arr, arr + SIZE);
    return 0;
}
