#include <stdio.h>
#include <stdlib.h>

int main(){

    int res = remove("./test.txt");
    if (res != 0)
    {
        printf("删除失败\n");
        return 1;
    }
        printf("删除成功\n");
    
    return 0;
}