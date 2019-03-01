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
	        printf("%d \n", a);
	        flag++;
	    }
	    if(flag<=n)
	    {
	        b=b*2;
	            printf("%d\n", b);
	        flag++;
	    }
	 
	   }
	     printf("%d %d\n", a, b);
	   c= a>b?a:b;
       d= a<b?a:b;

	       printf("%d %d\n", c, d);
	     printf("%d \n", c/d);
	     
	}
	return 0;
}

