#include <stdio.h>
#define URL "127.0.0.1"
int main(void)
{
    printf("正在使用的地址:%s\n", URL);
    const int port = 8080;
    printf("正在使用的端口:%d\n", port);

    enum STATUS
    {
        Succeed,
        Failed
    };

    printf("Succeed:%d\n", Succeed); // 0
    return 0;
}