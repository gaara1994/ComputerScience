#include <stdio.h>

typedef int my_int;
int main()
{
    my_int age = 18;
    printf("今年%d岁\n", age);
    printf("明年%d岁\n", age + 1);
    return 0;
}