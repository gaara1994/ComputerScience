#include <stdio.h>  
#include "math_functions.h"  
  
int main() {  
    // 访问具有外部链接的变量  
    printf("Global value: %d\n", global_value);  
  
    // 调用具有外部链接的函数  
    int result = add(5, 3);  
    printf("Result of add(5, 3): %d\n", result);  
  
    return 0;  
}
// gcc main.c math_functions.c