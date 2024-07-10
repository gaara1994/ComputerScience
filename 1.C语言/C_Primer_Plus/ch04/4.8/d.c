#include <stdio.h>

int main(void)
{
    char name[20];
    float height;

    printf("姓名：\n");
    scanf("%s", name);

    printf("身高厘米：\n");
    scanf("%f", &height);

    printf("%s,你是的身高是%f米\n", name, height / 100);

    return 0;
}