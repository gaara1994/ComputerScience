#include <stdio.h>
#include <string.h>
/**
 * 1.局部作用域
    1.局部变量是在函数内部定义的，或者在任何由花括号 {} 包围的代码块（例如循环、条件语句）内部定义的。
    2.这些变量只在定义它们的函数或代码块内部可见。
    3.局部变量在函数调用开始时被创建，在函数调用结束时被销毁。
    4.如果在同一个作用域内多次声明相同的局部变量，后面声明的会覆盖前面的，但这通常被视为不良实践。
 */

void test()
{
    int age;
    char name[20];

    age = 10;
    strcpy(name, "张三");
    printf("姓名：%s\n", name);
    printf("年龄：%d\n", age);
}
int main()
{
    test();
    // printf("姓名：%s\n", name);//无法访问
    return 0;
}