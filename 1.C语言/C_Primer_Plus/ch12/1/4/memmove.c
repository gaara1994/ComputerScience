#include <stdio.h>
#include <string.h>

int main()
{
    char word[10] = "Hello";

    char dest[10];

    memmove(dest, word, sizeof(word) - 1);

    printf("dest: %s\n", dest);
    return 0;
}