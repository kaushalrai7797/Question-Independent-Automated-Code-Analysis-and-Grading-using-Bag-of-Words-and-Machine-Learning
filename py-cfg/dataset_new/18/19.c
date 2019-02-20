#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,q,i;
	    scanf("%llu%llu",&n,&q);
	    long long int d[n],x[q],product=1;
	    for(i=0;i<n;i++)
	    {
	        scanf("%llu",&d[i]);
	        product*=d[i];
	    }
	    for(i=0;i<q;i++)
	    {
	    scanf("%llu",&x[i]);
	    printf("%llu ",x[i]/product);
	    }
	    printf("\n");
	}
	return 0;
}

