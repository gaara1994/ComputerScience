#include <stdio.h>

int main()
{
    char currentChar = 'A'; // 当前字符从'A'开始
    int rowCount = 1;       // 行计数器

    // 循环打印三行
    for (int i = 0; i < 6; i++)
    {
        // 每行打印字符数量等于行数
        for (int j = 0; j < rowCount; j++)
        {
            printf("%c", currentChar); // 打印当前字符
            currentChar++;             // 更新当前字符为下一个字符
        }
        printf("\n"); // 打印完一行后换行
        rowCount++;   // 增加行计数器
        // 如果到达第三行（行计数器为3），重置当前字符为'D'
        }

    return 0;
}