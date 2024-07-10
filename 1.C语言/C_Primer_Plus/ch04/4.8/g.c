#include <stdio.h>
#include <float.h> // 包含FLT_DIG和DBL_DIG的定义

int main(void)
{
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
    double res1 = 1.0 / 3.0;
    float res2 = 1.0 / 3.0;

    printf("6位数的res1: %.6f\n", res1);
    printf("6位数的res2: %.6f\n", res2);

    printf("12位数的res1: %.12f\n", res1);
    printf("12位数的res2: %.12f\n", res2);

    printf("16位数的res1: %.16f\n", res1);
    printf("16位数的res2: %.16f\n", res2);
    return 0;
}