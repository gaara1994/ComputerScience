#include <stdio.h>
#include <string.h>

int main()
{
    char dest[7] = "aaaaaa";
    char src[4] = "bbb";

    strcpy(dest, src); // 使用strcpy复制src到dest

    // 获取dest字符串的结尾地址
    char *endOfDest = dest + strlen(dest);

    // 输出dest字符串后面的字符（如果存在）
    printf("Character after the string: '%c'\n", *(endOfDest + 1));
    printf("Next character: '%c'\n", *(endOfDest + 2));
    printf("Next character: '%c'\n", *(endOfDest + 3));

    return 0;
}