#include <stdio.h>

// 接受一个int类型的指针，让它加10
void addTen(int *ptr);

void addTen(int *ptr)
{
    *ptr = *ptr + 10;
}

int main()
{
    int a = 8;
    addTen(&a);
    printf("被加工过的a = %d\n", a);

    return 0;
}