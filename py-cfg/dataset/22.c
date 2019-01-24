#include<stdio.h>
int main()
{
	int t,N,K,i,x,h[1025],min;
	scanf("%d",&t);
	while(t--)
	{
	    min=0,x=0;
		scanf("%d %d",&N,&K);
		h[0]=0;
		for(i=1;i<=N;i++)
		{
			scanf("%d",&h[i]);
			x=h[i]-h[i-1];
			if(x>K)
			{
				min=min+x/K;
				if(x%K==0)
					min--;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}