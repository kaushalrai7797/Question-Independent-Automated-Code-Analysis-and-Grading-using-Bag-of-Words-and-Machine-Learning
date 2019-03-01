#include <stdio.h>

int main(void) {
	// your code goes her
	int t,i;
	scanf("%d\n",&t);
	for(i=1;i<=t;i++)
	{
	    int n,a,b;
	    scanf("%d%d%d\n",&a,&b,&n);
	    for(int j=1;j<=n;j++)
	    {
	        if(j%2!=0) a=a*2;
	        else b=b*2;
	    }
	    if(a>b) printf("%d\n",a/b);
	    else printf("%d\n",b/a);
	}
	return 0;
}

