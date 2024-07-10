#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("参数的数量为: %d\n", argc);
    printf("参数分别为：\n");
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}