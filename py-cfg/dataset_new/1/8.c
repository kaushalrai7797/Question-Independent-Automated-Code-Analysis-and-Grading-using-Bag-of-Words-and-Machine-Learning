#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,k=0,j=1;
	    scanf("%lld",&n);
	    long long int a[1000000000];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    a[n]=0;
	    for(int i=0;i<n;i++)
	    {
	            if(a[i]>a[i+1])
	            {
	            k=k+j*(j+1)/2;
	            j=0;
	            }
	            j++;
	        
	    }
	    printf("%lld\n",k);
	    
	}
	return 0;
}

