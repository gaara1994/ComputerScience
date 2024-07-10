#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRADE 3
#define CLASS 24
int main()
{
    // 声明多维数组
    // 高中有三个年级，每个年级24个班
    int hight_school[GRADE][CLASS];
    // 初始化随机数发生器
    srand(time(NULL));
    // 赋值
    for (int i = 0; i < GRADE; i++)
    {
        for (int j = 0; j < CLASS; j++)
        {

            // 生成40-50随机数
            int number = rand() % 11 + 40; // rand() % 11 生成 0-10的随机数，然后加40
            printf("随机数:%d\n", number);
            hight_school[i][j] = number;
        }
    }

    printf("%d\n", hight_school[2][23]); // 三年24班
    return 0;
}
