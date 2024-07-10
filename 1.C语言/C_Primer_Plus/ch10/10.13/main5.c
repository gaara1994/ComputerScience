#include <stdio.h>

double geDif(double arr[], int len)
{
    double max = arr[0];
    double min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return max - min;
}

int main(void)
{
    double numbers[6] = {5.0, 10.0, 2.50, 3.14, 2.17828, 18.0};
    double dif;
    dif = geDif(numbers, 6);
    printf("差值:%f\n", dif);
    return 0;
}