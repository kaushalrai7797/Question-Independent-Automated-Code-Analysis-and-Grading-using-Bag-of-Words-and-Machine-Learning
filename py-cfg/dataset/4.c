#include<stdio.h>
int main()
{
	int a[1025],i,k,n,N,j,t,count;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		count=0;
		scanf("%d%d",&n,&k);
		a[0]=0;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
			t=a[j]-a[j-1];
			if(t>k)
			{
				count+=t/k;
				if(t%k==0) count--;
			}
		}
		printf("%d\n",count);
	}
}