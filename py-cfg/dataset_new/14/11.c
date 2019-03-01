#include <stdio.h>

int main(void) {
	int m,b,t,z;
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%d%d",&m,&b);
	    while(1)
	    {
	    if(m==b || m==0 || b==0)
	    {
	        z=m+b;
	        printf("%d\n",z);
	        break;
	    }
	    if(m>b)
	    {
	        m=m-b;
	       // printf("//%d\n",m);
	    }
	    else if(b>m)
	    {
	        b=b-m;
	       // printf("//%d\n",b);
	    }
	    }
	    t--;
	}
	return 0;
}

