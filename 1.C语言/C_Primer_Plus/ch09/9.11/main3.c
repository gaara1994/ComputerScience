#include <stdio.h>

// 函数声明
void printCharPattern(char ch, int timesPerLine, int lines);

int main()
{
    printCharPattern('T', 9, 9); // 打印3行，每行5个井号字符
    return 0;
}

// 函数定义
void printCharPattern(char ch, int timesPerLine, int lines)
{
    for (int line = 0; line < lines; line++)
    {
        for (int i = 0; i < timesPerLine; i++)
        {
            printf("%c", ch);
        }
        printf("\n"); // 换行
    }
}