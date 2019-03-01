#include<stdio.h>
int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	if(N<=K)
		printf("1\n");
	else
	{
		int a[200000],s=0,e=K;
		for (int i = 0; i < K; ++i)
		{
			a[i]=1;
		}
		while(N>e)
		{
			a[e]=0;
			for (int i = s; i < e; ++i)
			{
				a[e]+=a[i];
			}
			s++;
			e++;
		}
		printf("%d\n", (a[e-1])%1000000007);
	}
	return 0;
}