#include <stdio.h>

/**
 * 打印二维数组
 * arr: 指向二维数组第一行的指针（实际上是int *）
 * rows: 数组的行数
 * cols: 数组的列数
 */
void printArray(int *arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    { // 外部循环控制行数
        for (int j = 0; j < cols; j++)
        { // 内部循环控制列数
            // 使用行数和列数计算元素在内存中的位置
            printf("%d ", arr[i * cols + j]);
        }
        printf("\n"); // 在每行结束后打印换行符
    }
}

int main(void)
{
    // 定义一个4行5列的二维数组
    int myArray[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
    };

    // 调用printArray函数来打印数组
    // 注意：这里我们传递myArray[0]的地址，即二维数组第一行的地址
    printArray(&myArray[0][0], 4, 5); // 或者简写为 printArray(myArray[0], 4, 5);

    return 0;
}