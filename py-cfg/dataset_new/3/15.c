#include <stdio.h>

int main(void) {
	int t;
	int a,b;
	scanf("%d",&t);
	int k=0,max=0;
	for(int i=0;i<t;i++){
	    scanf("%d %d",&a,&b);
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
	printf("%d %d",k+1,max);

	return 0;
}

