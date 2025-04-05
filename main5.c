int isPrime(int num);
int sumofPrimes(int num);
#include <stdio.h>
int main(){
	int num;
	printf("enter num");
	scanf("%d",&num);
	if(sumofPrimes( num)){
		printf("num is sum of primes\n");
	}else{
		printf("num isn't sum of primes\n");
	}return 0;
}
