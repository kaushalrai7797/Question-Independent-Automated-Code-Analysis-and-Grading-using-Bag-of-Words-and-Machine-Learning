#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int x;
	scanf("%d", &x);
	int a, b, n, flag;
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
	     
	   a=  a>b?a:b;
        b= a<b?a:b;

	   
	     printf("%d \n", a/b);
	     
	}
	return 0;
}

