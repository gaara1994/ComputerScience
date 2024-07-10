#include <stdio.h>

// 定义枚举类型
enum Status
{
    PENDING, // 挂起0
    SUCCEED, // 成功1
    FAILED,  // 失败2
};
int main()
{
    // 声明枚举类型变量,模拟接收到的参数
    enum Status pod_status;
    pod_status = 1;

    switch (pod_status)
    {
    case PENDING:
        printf("pod被挂起\n");
        break;
    case SUCCEED:
        printf("pod运行成功\n");
        break;
    case FAILED:
        printf("pod运行失败\n");
    }

    return 0;
}