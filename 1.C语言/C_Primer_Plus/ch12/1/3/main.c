#include <stdio.h>

void test(){
	//auto int age = 18;
	//auto可写可不写
	//函数内部定义只在函数内部有效
	int age = 35;

}
int main(){
	//复合语句中定义,只在复合语句中生效
	if(1){
		int a = 10;
		printf("a = %d",a);
	}
	//离开复合语句,a不存在了
	//printf("a = %d",a);
	return 0;
}
