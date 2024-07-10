#include <stdio.h>

int main(void)
{
    /**
     * 字面量（Literal）
     */
    int a = 123;         // 123 是整数字面量
    float b = 3.14;      // 3.14 是浮点数字面量
    char c = 'A';        // 'A' 是字符字面量
    char *str = "Hello"; // "Hello" 是字符串字面量

    /**
     * 复合字面量（Literal）
     * 使用 (类型) 来声明
     */
    int *arr_ptr = (int[]){1, 2, 3, 4}; // (int[]){1, 2, 3, 4} 是 数组复合字面量

    typedef struct
    {
        int x;
        int y;
    } Point;
    Point *ptrP = &(Point){1, 2};
    return 0;
}