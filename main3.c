unsigned long long factorial(int num);
#include <stdio.h>
int main(){
	int num;
	printf("enter num");
	scanf("%d",&num);
	printf("factorial of %d is %lld\n",num,factorial(num));
	return 0;
}
