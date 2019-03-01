#include <stdio.h>

int main(void) {
	// your code goes here
	int a,i,b,c,gcd,answer=0,j;
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	    {
	        scanf("%d %d",&b,&c);
	        
	        for(j=1; j <= b && j <= c; ++j)
    {
        // Checks if i is factor of both integers
        if(b%j==0 && c%j==0)
            gcd = j;
    }
    
    answer = 2*gcd;
    printf("%d\n",answer);
    
	    }
	
	return 0;
}

