#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
  jolly();
  jolly();
  jolly();
  deny();
  return 0;
}

void jolly(void)
{
  printf("For hw's a jolly good fellow!\n");
}

void deny()
{
  printf("Which nobody can deny!\n");
}
