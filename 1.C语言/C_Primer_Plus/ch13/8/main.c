#include <stdio.h>
#include <stdlib.h>

int main(){  
    int res = rename("a.txt","a.txt.bak");
    if (res)
    {
        printf("重命名失败\n");
        return 1;
    }
        printf("重命名成功\n");
    
    return 0;
}