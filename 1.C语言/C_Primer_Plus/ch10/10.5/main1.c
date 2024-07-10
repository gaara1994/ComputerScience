#include <stdio.h>
/**
 * 一、赋值
 * 把地址赋值给指针变量
 */
int main(void)
{
    int age = 18;
    int *ptrAge = &age;

    int dic[4] = {'a', 'b', 'c', 'd'};
    int *ptrDic = dic;
    printf("dic=%p\n", dic);
    printf("dic[0]=%p\n", &dic[0]);
    printf("ptrDic=%p\n", ptrDic);
    printf("%d\n", dic == ptrDic); // 1
    return 0;
}