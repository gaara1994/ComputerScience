#include <stdio.h>

// 编写一个函数，把double类型数组中的数据倒序排列，并在一个简单 的程序中测试该函数。
void reverse(double arr[], int len)
{
    double tmp;
    for (int i = 0; i < len; i++)
    {
        tmp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = tmp;
    }
}

int main(void)
{
    double numbers[6] = {1.0, 2.0, 3.50, 4.14, 5.17828, 6.0};
    reverse(numbers, 6);
    printf("%f\n", numbers[0]);
    printf("%f\n", numbers[5]);
    return 0;
}