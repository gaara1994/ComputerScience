#include <stdio.h>
void chline(char ch, int i, int j);
void chline(char ch, int i, int j)
{
    for (int a = 0; a < j; a++)
    {
        for (int b = 0; b < i; b++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
int main(void)
{
    char ch = 'T';
    int i, j;
    i = 9;
    j = 9;

    chline(ch, i, j);
}