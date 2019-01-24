#include<stdio.h>

int main()
{
	int t,n,i,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int sum=0;
		scanf("%d %d",&n,&k);
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n-1;j++)
		{
			sum=sum+((a[j+1]-a[j]-1)/k);
		}
		sum=sum+((a[0]-1)/k);
		printf("%d\n",sum);
	}
}