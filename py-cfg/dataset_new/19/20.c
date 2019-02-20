#include <stdio.h>

int main()
{
		long long n,k,temp,i;
		scanf("%lld%lld",&n,&k);
		temp=k;
		long long arr[n];
		memset(arr,0,sizeof(arr));
		for(i=0;i<n;i++)
		{
		    if(i<k)
		        {
		            arr[i]=1;
		        }
		    else
		    {
		        while(temp)
		            {
		                arr[i]+=arr[i-temp];
		                temp--;
		            }
		        temp=k;
		    }
		}
		printf("%lld",arr[n-1]%1000000007);
	    return 0;
}