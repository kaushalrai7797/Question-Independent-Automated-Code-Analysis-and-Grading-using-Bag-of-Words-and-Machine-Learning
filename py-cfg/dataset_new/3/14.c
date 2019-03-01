#include <stdio.h>

int main(void) {
	long int t;
	long int a,b;
	scanf("%ld",&t);
	long int k=0,max=0;
	for(int i=0;i<t;i++){
	    scanf("%ld %ld",&a,&b);
	    if(a>b){
	        if(max<a-b){
	        max=a-b; 
	        k=i;
	        }
	    }
	    else{      
	        if(max<b-a){
	        max=b-a;
	        k=i;
	        }
	    }
	}
	printf("%ld %ld",k+1,max);

	return 0;
}

