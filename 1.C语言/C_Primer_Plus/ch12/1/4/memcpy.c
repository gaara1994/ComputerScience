#include <stdio.h>
#include <string.h>

int main()
{
    char word[10] = "Hello";

    char dest[10];

    // printf("size = %ld\n", sizeof(word));//10
    memcpy(dest, word, sizeof(word) - 1);

    printf("dest: %s\n", dest);
    return 0;
}