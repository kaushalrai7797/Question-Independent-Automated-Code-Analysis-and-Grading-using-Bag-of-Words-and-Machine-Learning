#include <stdio.h>
long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main(void) {
	// your code goes here
	long long b,c,answer=0;
	int a;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	    {
	        scanf("%lld%lld",&b,&c);
	        
	     
    answer = 2*gcd(b,c);
    printf("%d\n",answer);
    
	    }
	
	return 0;
}

