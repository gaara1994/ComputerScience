#include <stdio.h>

// 函数声明
void larger_of(double *x, double *y);
void larger_of(double *x, double *y)
{
    if (*x > *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}

int main()
{
    double x, y;
    x = 3.14;
    y = 2.71828;
    larger_of(&x, &y);
    printf("%f\n", x);
    printf("%f\n", y);
    return 0;
}
