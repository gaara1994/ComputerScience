#include <stdio.h>

int main(void)
{
    float speed;
    float file;
    printf("请输入网速(Mb/s)\n");
    scanf("%f", &speed);

    printf("请输入文件大小MB\n");
    scanf("%f", &file);

    float time;
    time = file * 8 / speed;
    printf("时间为：%.2f秒\n", time);

    return 0;
}