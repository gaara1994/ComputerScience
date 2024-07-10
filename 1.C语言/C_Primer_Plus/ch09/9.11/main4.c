#include <stdio.h>

// 函数声明
double avg(double a, double b);
double avg(double a, double b)
{
    return 1 / ((1 / a + a / b) / 2);
}

int main()
{
    double res;
    res = avg(3.14, 2.71828);
    printf("%f\n", res);
    return 0;
}
