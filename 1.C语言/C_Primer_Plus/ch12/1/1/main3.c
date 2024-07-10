#include <stdio.h>

/**
 * 3.全局作用域
    1.全局变量是在所有函数外部定义的，它们在整个源文件中可见，甚至可以通过外部链接在其他源文件中访问（如果使用了适当的链接规则）。
    2.全局变量在整个程序执行期间一直存在，直到程序结束才销毁。
 */

int globalVar = 20; // 全局变量

void test()
{
    printf("test访问：%d\n", globalVar);
}

int main()
{
    test();
    printf("main访问：%d\n", globalVar);
    return 0;
}