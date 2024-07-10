#include <stdio.h>

//函数声明
int max(int a,int b);
int main(){
	int res;
	res = max(2,5);
	printf("最大的是:%d\n",res);
	return 0;
}

//函数定义
int  max(int a,int b){
	if(a > b){
		return a;
	}else{
	
		return b;
	}
}


