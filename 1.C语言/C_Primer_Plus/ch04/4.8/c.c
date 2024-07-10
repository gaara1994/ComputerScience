#include <stdio.h>

int main(void)
{
    float f1;
    scanf("%f", &f1);
    printf("%f\n", f1);

    // 注意：%e 是用于科学记数法（指数记数法）的，并且不同系统可能会显示不同数量的小数位
    printf("%e\n", f1);
    return 0;
}