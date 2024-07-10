#include <stdio.h>

int main(void)
{
    char first_name[15];
    char last_name[15];

    printf("请输入名:\n");
    scanf("%14s", first_name); // 使用%s并限制最大读取长度为14，以防止缓冲区溢出

    printf("请输入姓:\n");
    scanf("%14s", last_name);
    printf("\"%s%s\"\n", first_name, last_name);
    printf("\"%20s%s\"\n", first_name, last_name);
    printf("\"%s%s\"\n", first_name, last_name);

    return 0;
}