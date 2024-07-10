#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[20];
    char lastName[20];
    int fLen, lLen;

    printf("输入名:\n");
    scanf("%s", firstName);
    printf("输入姓:\n");
    scanf("%s", lastName);

    fLen = strlen(firstName);
    lLen = strlen(lastName);
    printf("%s %s %*d %d\n", firstName, lastName + 1, fLen, lLen);

    return 0;
}