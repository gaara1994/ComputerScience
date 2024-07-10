#include <stdio.h>
/**
 * 六、指针变量+整数
 * 让该指针向后面移动整数个步长。
 */
int main(void)
{
    char dic[26] = {'a', 's', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'};
    char *ptrDic = dic;

    printf("ptrDic = %c\n", *ptrDic);
    ptrDic = ptrDic + 2;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic = ptrDic + 3;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic = ptrDic + 4;
    printf("ptrDic = %c\n", *ptrDic);
    return 0;
}