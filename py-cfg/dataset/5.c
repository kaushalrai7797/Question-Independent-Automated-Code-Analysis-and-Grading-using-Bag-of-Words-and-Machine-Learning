#include<stdio.h>
int main()
{
	int T,N,K,i,h[129],min;
	scanf("%d",&T);
	while(T)
	{
		min=0;
		scanf("%d%d",&N,&K);
		h[0]=0;
		for(i=0;i<N;i++)
		{
			scanf("%d",&h[i+1]);
		}
		for(i=0;i<N;i++)
		{
			if((h[i+1]-h[i])%K==0)
			{
				min+=(h[i+1]-h[i])/K-1;
			}
			else
			{
				min+=(h[i+1]-h[i])/K;
			}
		}
		printf("%d\n",min);
		T--;
	}
	return 0;
}