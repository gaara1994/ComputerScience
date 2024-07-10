#include <stdio.h>
double mindouble(double a, double b);
double mindouble(double a, double b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main(void)
{
    double min;
    min = mindouble(3.1415926, 2.71828);
    printf("最小值是%f\n", min);
    return 0;
}