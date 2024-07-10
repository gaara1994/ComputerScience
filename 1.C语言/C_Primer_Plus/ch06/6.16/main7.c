#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[50];
    printf("请输入单词:\n");
    scanf("%s", word);
    printf("输入了:%s\n", word);
    int len = strlen(word);

    for (int i = len; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}