#include <stdio.h>
/**
 * 八、指针变量比较
 */
int main(void)
{
    int arr[5] = {8,4,5,2,3};
    if (&arr[4] > &arr[2])
    {
        printf("arr[4]在后面\n");
    }else{
        printf("arr[2]在前面\n");
    }
    
    return 0;
}