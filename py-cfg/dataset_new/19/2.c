#include <stdio.h>

int main()
{
	unsigned long long n,k,z=0,i,sum;
	scanf("%llu%llu",&n,&k);
	unsigned long long arr[n],first=0;
	
	if(n<=k) 
	{
		printf("%d", 1);
		return 0;
	}
	for(i=0;i<k;i++)
	    {
	        arr[i]=1;
	    }
	sum=k;
	
	for(i=k;i<n;i++)
	{
	    if(i>k)
	        {
	            first=arr[z];
	            sum=sum*2-first;
	            z++;
	        }
	    arr[i]=sum;
	}
	printf("%llu\n",arr[i-1]);
	return 0;
}