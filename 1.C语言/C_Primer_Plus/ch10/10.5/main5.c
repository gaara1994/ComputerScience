#include <stdio.h>
/**
 * 五、指针变量递减
 * 让该指针移动至数组的上一个元素
 */
int main(void)
{
    char dic[4] = {'a', 's', 'd', 'f'};
    char *ptrDic = &dic[4];

    printf("ptrDic = %c\n", *ptrDic);
    ptrDic--;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic--;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic--;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic--;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic--;
    printf("ptrDic = %c\n", *ptrDic);
    return 0;
}