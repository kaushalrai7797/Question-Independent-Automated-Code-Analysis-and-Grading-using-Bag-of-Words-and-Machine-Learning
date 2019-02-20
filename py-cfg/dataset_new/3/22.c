#include <stdio.h>

int main(void) {
	int n,y;
	int d=0;
	scanf("%d",&n);
	while(n--)
	{
	    int a,b;
	    int m=0,l=0;
	    scanf("%d %d",&a,&b);
	    m=m+a;
	    l=l+b;
	    if(m-l>d)
	    {
	        y=1;
	        d=m-l;
	    }
	    if(l-m>d)
	    {
	        y=2;
	        d=l-m;
	    }
	}  
	   printf("%d %d\n",y,d);
	return 0;
}

