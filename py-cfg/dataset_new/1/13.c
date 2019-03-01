#include<stdio.h>
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d",&n);
		int arr[n],k=0,check,count=0;
		
		for(i=0;i<n;i++)
			scanf("%d",arr+i);
			
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				check=1;
				
				for(k=i;k<=j;k++)
				{
					if(k+1 <= j)
						if(arr[k]>arr[k+1])
						{
							check=0;
							break;
						}				
				}
				
				if(check==1)
					count++;
			}
		}
		printf("%d\n",count);	
	}
	return 0;
}