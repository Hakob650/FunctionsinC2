#include <stdio.h>
int sumofPrime(int num) {
    for(int i=4;i<=num;++i){
	    for(int j=1;j<=i;++j){
		    if(num=i+j){
			    return 1;
		    }else{
			    return 0;
		    }
	   }
    }
}
