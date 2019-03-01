#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int x,y,p=0;
	    scanf("%lld %lld",&x,&y);
	   
	        while(1)
	        {
	        if(x>y)
	         x=x-y;
	        if(x<y)
	        y=y-x;
	        if(x==0 || y==0 || x==y)
	        break;
	        }
	         p=x+y;
	    
	   
	    printf("%lld\n",p);
	}
	return 0;
}

