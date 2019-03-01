#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k=0;
	    scanf("%d",&n);
	    long long int a[1000000000];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i;j<=i+1;j++)
	        {
	            if(a[i]<=a[j])
	            k=k+1;
	        }
	    }
	    printf("%d\n",k+1);
	    
	}
	return 0;
}

