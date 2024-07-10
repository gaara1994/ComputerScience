#include <stdio.h>
#include "func.h"

int max(int a, int b)
{
    if (a > b)
    {
        printf("最大值是%d\n", a);
        return a;
    }
    else
    {
        printf("最大值是%d\n", b);
        return b;
    }
}