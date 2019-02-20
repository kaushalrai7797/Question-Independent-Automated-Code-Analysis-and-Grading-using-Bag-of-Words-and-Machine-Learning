#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&x,&y);
	    while(x>=y||y>=x)
	    {
	      if(x==y)
	      {
	       printf("%d\n",x+y);
	       break;
	      }
	   else if(x>y)
	    {
	        x=x-y;
	        if(x==y)
	        {
         printf("%d\n",x+y);
         break;
	        }
	    }
	    else 
	    {
	        y=y-x;
	        if(x==y)
	        {
	       printf("%d\n",x+y);
	       break;
	        }
	    }
	    
	  }
	}
	return 0;
}

