#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		unsigned long long int cnt=(long long int)1;
		unsigned long long int n,k;
		scanf("%llu %llu",&n,&k);
		//n identical marbles into k different colours (k-1)C(n-1)
		n=n-1;
		k=k-1;
		if(k>n/2)
			k=n-k;
		unsigned long long int i=1;
		while(n>0 && i<=k)
		{
			cnt=cnt*n/i;
			n--;
			i++;
		}
		printf("%llu\n",cnt);
	}
}
