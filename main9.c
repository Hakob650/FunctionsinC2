int fibbonaci(int num);
#include <stdio.h>
int main(){
	int num;
	printf("enter num");
	scanf("%d",&num);
	int result=fibbonaci(num);
	printf(" %d-th  fibbonaci number is %d\n",num,result);
	return 0;
}
