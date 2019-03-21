#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	    int n;
	    scanf("%d\n",&n);
	    long  long int a[n],i,j,d=1000000000,p;
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[j]>=a[i])
	            p=a[j]-a[i];
	            else
	            p=a[i]-a[j];
	            if(p<d)
	            d=p;
	        }
	    }
	    printf("%lld\n",d);
	}
	return 0;
}
