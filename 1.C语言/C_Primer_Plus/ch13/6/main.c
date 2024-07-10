#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int main()
{
    struct stat fileStat;
    int res;
    res = stat("./a.txt", &fileStat);

    if (res == -1)
    {
        printf("stat err \n");
        return -1;
    }
    printf("文件大小%ld字节\n", fileStat.st_size);
    printf("文件最后修改时间 %ld\n", fileStat.st_mtime);
    return 0;
}