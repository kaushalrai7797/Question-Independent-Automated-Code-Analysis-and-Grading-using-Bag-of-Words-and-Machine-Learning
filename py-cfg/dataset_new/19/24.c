#include <stdio.h>
#include <string.h>
int main()
{
		int n,k,temp,i;
		scanf("%d%d",&n,&k);
		temp=k;
		int arr[n];
		memset(arr,0,sizeof(arr));
		for(i=0;i<n;i++)
		{
		    if(i<k)
		        {
		            arr[i]=1;
		        }
		    else
		    {
		        while(temp--)
		            {
		                arr[i]+=arr[i-temp-1];
		            }
		        temp=k;
		    }
		}
		printf("%d",arr[n-1]);
	    return 0;
}