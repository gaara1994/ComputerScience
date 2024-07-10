#include <stdio.h>

void one_three(void);
void tow(void);

int main(void)
{
  printf("starting now:\n");
  one_three();
  tow();
  printf("three\n");

  printf("done!\n");
  return 0;
}

void one_three()
{
  printf("one\n");
}

void tow()
{
  printf("tow\n");
}
