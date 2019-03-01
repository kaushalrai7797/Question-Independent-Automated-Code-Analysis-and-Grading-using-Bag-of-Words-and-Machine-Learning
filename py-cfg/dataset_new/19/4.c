#include <stdio.h>

int main()
{
	long n,k,z=0,i,sum;
	scanf("%ld%ld",&n,&k);
	long arr[n],first=0;
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
	printf("%ld\n",arr[n-1]);
	return 0;
}