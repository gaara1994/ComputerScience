#include <stdio.h>
#define MINUTES_IN_HOUR 60

int main(void)
{
    int minutes;
    while (1)
    {
        scanf("%d", &minutes);

        if (minutes <= 0)
        {
            break;
        }

        int h, m;
        h = minutes / MINUTES_IN_HOUR;
        m = minutes % MINUTES_IN_HOUR;
        printf("%d分钟=%d小时%d分钟\n", minutes, h, m);
    }

    return 0;
}