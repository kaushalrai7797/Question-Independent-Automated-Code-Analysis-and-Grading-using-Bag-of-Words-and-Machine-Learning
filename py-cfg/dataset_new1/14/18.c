#include <stdio.h>

int main(void) {
	// your code goes here
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&m,&n);
	    while(m!=n&&m!=0&&n!=0)
	    {
	        if(m<n)
	        {
	            n=n-m;
	        }
	        else if(m>n)
	        {
	            m=m-n;
	        }
	        
	    }
	    printf("%d\n",m+n);
	    
	}
	return 0;
}

