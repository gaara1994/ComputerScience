#include <stdio.h>

double getMax(double arr[], int len)
{
    double max = arr[0];
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
    double numbers[3] = {5.0, 10.0, 2.0};
    double max;
    max = getMax(numbers, 3);
    printf("最大值：%f\n", max);
    return 0;
}