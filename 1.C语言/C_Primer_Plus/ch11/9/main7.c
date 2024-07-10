#include <stdio.h>
#include <string.h>

#define M1 "How are ya, sweetie? "
char M2[40] = "Beat the clock.";
char *M3 = "chat";

int main(void)
{
    char words[80];
    printf(M1);
    puts(M1);     // How are ya, sweetie?How are ya, sweetie?
    puts(M2);     // Beat the clock.
    puts(M2 + 1); // eat the clock.

    strcpy(words, M2); // words = Beat the clock.
    strcat(words, " Win a toy.");
    puts(words); // Beat the clock.  Win a toy.
    words[4] = '\0';
    puts(words); // Beat
    while (*M3)
        puts(M3++);
    // chat
    // hat
    // at
    // t
    puts(--M3); // 目前指针在 chat后面的空白，先进行指针运算-1，回到t，所以打印 t
    puts(--M3); // 指针回到a ,打印at
    M3 = M1;
    puts(M3); // How are ya, sweetie?

    return 0;
}
