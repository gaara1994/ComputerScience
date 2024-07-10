#include <stdio.h>

void a();
void a()
{
    printf("Please choose one of the following:\n 1) copy files 2) move files\n 3) remove files 4) quit\n Enter the number of your choice:\n");
}

int main(void)
{
    int choose;
    a();
    scanf("%d", &choose);
    printf("输入的是%d\n", choose);
    return 0;
}
