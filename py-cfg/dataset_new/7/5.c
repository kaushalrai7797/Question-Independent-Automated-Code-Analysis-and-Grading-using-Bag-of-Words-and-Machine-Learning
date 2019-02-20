#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int x;
	scanf("%d", &x);
	int a, b, n, c, d, flag;
	while(x--)
	{
	    scanf("%d %d %d", &a, &b, &n);
	   flag= 1;
	   while(flag<=n)
	   {
	    if(flag<=n)
	    {
	        a=a*2;
	     
	        flag++;
	    }
	    if(flag<=n)
	    {
	        b=b*2;
	           
	        flag++;
	    }
	 
	   }
	     
	   c= a>b?a:b;
       d= a<b?a:b;

	 
	     printf("%d \n", c/d);
	     
	}
	return 0;
}

