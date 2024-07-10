#include <stdio.h>

/**
 * 编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始 化它。
 * 该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示 出各元素的新值。
 * 编写一个函数显示数组的内容，再编写一个函数把各元素 的值翻倍。这两个函数都以函数名和行数作为参数。
 */

void printArr(int arr[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void doubleElements(int arr[][5], int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = arr[i][j] * 2;
        }
    }
}
int main(void)
{
    int arr[3][5] = {{1, 3, 5, 7, 9}, {11, 13, 15, 17, 19}, {21, 23, 25, 27, 29}};
    printArr(arr, 3);
    doubleElements(arr, 3);
    printArr(arr, 3);
    return 0;
}