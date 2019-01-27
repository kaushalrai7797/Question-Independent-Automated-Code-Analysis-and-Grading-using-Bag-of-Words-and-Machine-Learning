#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,rev=0,r;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    rev=0;
	    while(n>0)
	    {
	        r=n%10;
	        n=n/10;
	        rev=(rev*10)+r;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}

