#include <stdio.h>

int getMax(int arr[], int len)
{
    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main(void)
{
    int numbers[6] = {5, 10, 2, 33, 1, 45};
    int max;
    max = getMax(numbers, 6);
    printf("最大值：%d\n", max);
    return 0;
}