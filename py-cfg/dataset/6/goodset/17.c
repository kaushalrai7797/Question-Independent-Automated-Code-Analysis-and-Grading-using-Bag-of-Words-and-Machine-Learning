#include<stdio.h>
int arr[100001];
int arrcf[100001][6];
//count k primes
int main()
{
	int i,j;
	for(i=2;i<=100001;i++)
	{
		if(arr[i]==0)
		{
			arr[i]=1;
			for(j=2*i;j<=100001;j+=i)
			{
				arr[j]++;
			}
		}
	}
	arrcf[1][1]=arrcf[1][2]=arrcf[1][3]=arrcf[1][4]=arrcf[1][5]=0;
	for(i=2;i<=100001;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(arr[i]!=j)
				arrcf[i][j]=arrcf[i-1][j];
			else
				arrcf[i][j]=arrcf[i-1][j]+1;
		}
	}
	int ntest;
	scanf("%d",&ntest);	
	while(ntest--)	
	{
		int a,b,k;
		scanf("%d%d%d",&a,&b,&k);
		printf("%d\n",arrcf[b][k]-arrcf[a-1][k]);
		
		
	}
	
	return 0;
}