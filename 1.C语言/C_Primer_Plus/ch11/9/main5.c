#include <stdio.h>
#include <string.h>
// 函数声明
char *pr(char *str);

char *pr(char *str)
{
    char *pc;
    pc = str;
    while (*pc)
    {
        putchar(*pc++);
    }
    printf("\n");
    do
    {
        putchar(*--pc);
    } while (pc - str);
    printf("\n");
    return (pc);
}

int main()
{
    // 定义一个字符串
    // char myString[] = "Ho Ho Ho!";
    char myString[] = "";

    // 调用 pr 函数
    char *result = pr(myString);

    // 输出函数返回的指针值，这通常是字符串末尾的地址
    printf("Pointer to the end of the string: %p\n", (void *)result);

    return 0;
}

/**
 * a   Ho Ho Ho!!oH oH oH
 *
 * b    指向char的指针
 *
 * c    H
 *
 * d    *--pc是先进行指针运算-1，在取值。--*pc是先取值在进行指针-1运算。
 *
 * e    putchar(--*pc);  Ho Ho Ho!!oH oH o
 *
 * f    while (*pc)检查是否指向空字符， while (pc - str)检查pc和str是否位于同一个位置
 *
 * g    会访问str前面位置的存储区
 *
 * h    必须在主调程序中声明pr()：char * pr(char *);
 *
 */

/**
 * 在C语言中，*pc 的值为 0 和 *pc 的值为 ''（空字符）实际上是相同的概念，因为 '' 在C语言中是代表字符串终止符的字符，它的ASCII码值是 0。

当你在字符串处理中看到条件 while (*pc)，这里的 *pc 是指针 pc 所指向的字符。在字符串的正常字符中，*pc 将是一个非零的ASCII码值，代表具体的字符。但是，当 pc 指向字符串的末尾，即字符串的终止符 '' 时，*pc 的值就是 0。

因此，在字符串处理的上下文中，说 *pc 的值为 0 或者说 *pc 的值为 '' 是等价的，两者都表示同一个概念——指针 pc 已经到达了字符串的末尾。

在循环条件 while (*pc) 中，只要 *pc 的值不为 0（即不等于 ''），循环将继续执行。一旦 *pc 的值变为 0（即等于 ''），条件变为 false，循环就会停止。这就是为什么在处理字符串时，while (*pc) 循环常常用于遍历字符串直到其结束。
 */

/**
 * 第一次循环：
pc 指向 '\0'，然后 --pc 使其指向 "o"。
putchar(*--pc); 输出 "o"。
第二次循环：
pc 指向 "o"，然后 --pc 使其指向 "l"。
putchar(*--pc); 输出 "l"。
这个过程重复，直到 pc 指向 "H"：

倒数第二次循环：
pc 指向 "e"，然后 --pc 使其指向 "H"。
putchar(*--pc); 输出 "H"。
最后一次循环：
pc 现在指向 "H"，--pc 会使 pc 指向字符串的起始位置之前，但实际上 pc 现在指向 "H"，因为我们使用的是先递减运算符。
putchar(*--pc); 试图输出 "H" 之前的字符，但由于 pc 已经在 "H" 的位置，pc - str 的结果为0，while 循环条件失败，循环终止。
 */