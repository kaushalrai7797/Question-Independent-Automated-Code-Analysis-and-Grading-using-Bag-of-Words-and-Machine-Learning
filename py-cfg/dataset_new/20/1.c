#include <stdio.h>

int main(void) 
{
	int t,l,r,res;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&l,&r);
	    res=l;
	    while((++l)<=r)
	    {
	        res=res^l;
	    }
	    if(res%2==0)
	    {
	        printf("Even\n");
	    }
	    else
	    {
	        printf("Odd\n");
	    }
	    
	}
	return 0;
}

