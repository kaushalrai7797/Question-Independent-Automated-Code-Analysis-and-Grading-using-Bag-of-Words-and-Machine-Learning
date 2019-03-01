#include <stdio.h>

int main(void) {
	// your code goes her
	int t,i;
	scanf("%d\n",&t);
	for(i=1;i<=t;i++)
	{
	    long int a,b,n;
	    scanf("%ld%ld%ld\n",&a,&b,&n);
	    for(int j=1;j<=n;j++)
	    {
	        if(j%2!=0) a=a*2;
	        else b=b*2;
	    }
	    if(a>b) printf("%ld\n",a/b);
	    else printf("%ld\n",b/a);
	}
	return 0;
}

