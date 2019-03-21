#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k;
		scanf("%lld %lld",&n,&k);
		n--;
		k--;
		long long res=1ll;
		if(k>n/2)
		k=n-k;
		for(long long int i=1;i<=k;i++)
			{
				res=res*n/i;
				n--;
			}
		printf("%lld\n",res);
	}
	return 0;
}	
