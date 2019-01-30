#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int sum=0;
		int m,r;
		while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		if(sum%9==0)
			printf("0\n");
		else
		{
			m=sum%9;
			if(m>9-m)
				printf("%d\n",(9-m));
			else
				printf("%d\n",m);
		}
	}
	return 0;
}



