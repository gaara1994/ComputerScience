#include <stdio.h>
/**
 * 1.实参是函数调用时候的参数，形参是函数定义时候的参数
 */

// 2.
void donut(int p1);
int gear(int p1, int p2);
int guess(void);
void stuff_it(double p1, double *p2);

// 3.
char n_to_char(int p1);
char digit(double p1, int p2);
double which(double *p1, double *p2);
int random(void);

// 4.
int sumInt(int a, int b);

int sumInt(int a, int b)
{
    return a + b;
}

// 5.
float sumFloat(float a, float b);

float sumFloat(float a, float b)
{
    return a + b;
}

// 6.
void alter(int *x, int *y);
void alter(int *x, int *y)
{
    int sum, diff;
    sum = *x + *y;
    diff = *x - *y;

    *x = sum;
    *y = diff;
}

// 7.
void salami(int num);
void salami(int num)
{
    int count;
    for (count = 0; count < num; count++)
    {
        printf("O salami mio!\n");
    }
}

// 8.
int max(int a, int b, int c);
int max(int a, int b, int c)
{
    int maxNum = a;
    if (b > maxNum)
    {
        maxNum = b;
    }

    if (c > maxNum)
    {
        maxNum = c;
    }
    return maxNum;
}

int main(void)
{
    int x, y;
    x = 5;
    y = 10;
    alter(&x, &y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    salami(5);

    int maxVaule;
    maxVaule = max(6, 2, 3);
    printf("最大值 %d\n", maxVaule);
    return 0;
}
