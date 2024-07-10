#include <stdio.h>

int main(void)
{
    int days, week, d;

    while (1)
    {

        printf("请输入天数\n");
        scanf("%d", &days);
        if (days <= 0)
        {
            break;
        }

        week = days / 7;
        d = days % 7;
        printf("%d天是 %d周 %d天\n", days, week, d);
    }

    return 0;
}