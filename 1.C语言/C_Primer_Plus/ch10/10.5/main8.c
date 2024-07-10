#include <stdio.h>
/**
 * 八、指针变量求差
 * 计算两个指针的差值,
 * 通过计算求出两元素之间的距.
 */
int main(void)
{
    char dic[26] = {'a', 's', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'};
    char *ptrDic = &dic[12];

    printf("ptrDic = %ld\n", &dic[12] - &dic[10]); // 2个char
    printf("ptrDic = %ld\n", &dic[12] - &dic[0]);  // dic 等价于 &dic[0] 差12个char
    printf("ptrDic = %ld\n", &dic[12] - dic);      // dic 等价于 &dic[0] 差12个char

    int arr[5] = {8, 4, 5, 2, 3};
    printf("ptrDic = %ld\n", &arr[5] - &arr[2]); // 3个int

    return 0;
}