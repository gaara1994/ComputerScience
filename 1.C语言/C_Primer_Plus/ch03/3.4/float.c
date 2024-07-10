#include <stdio.h>

int main(void)
{
  float money;
  money = 998.98;
  printf("money = %f\n",money);

  float pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706;
  printf("pi = %f\n",pi);//3.141593
  printf("pi = %.20f\n",pi);//3.14159274101257324219 打印20位
  return 0;
}
