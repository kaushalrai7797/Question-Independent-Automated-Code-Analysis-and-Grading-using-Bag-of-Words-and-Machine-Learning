#include<stdio.h>

int main()
{
	int t,n,k,step=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		int h[n+1];
		h[0]=0;
		for(int i=1;i<n+1;i++)
		{
			scanf("%d",h+i);
		}
		for(int i=0;i<n;i++)
		{
			step+=(h[i+1]-h[i])/k;
			if((h[i+1]-h[i])%k==0)
			step--;
		}
		printf("%d\n",step);
		step=0;
	}
}
