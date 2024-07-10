#include <stdio.h>
/**
 * 四、指针变量递增
 * 让该指针移动至数组的下一个元素
 */
int main(void)
{
    char dic[4] = {'a', 's', 'd', 'f'};
    char *ptrDic = dic;

    printf("ptrDic = %c\n", *ptrDic);
    ptrDic++;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic++;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic++;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic++;
    printf("ptrDic = %c\n", *ptrDic);
    ptrDic++;
    printf("ptrDic = %c\n", *ptrDic);
    return 0;
}