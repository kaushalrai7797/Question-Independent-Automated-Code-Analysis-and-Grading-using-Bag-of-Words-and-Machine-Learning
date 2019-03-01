#include<stdio.h>
#include<stdlib.h>

int gcd(long long int a,long long int b)
{
		if(a==0){
		return b;
	}
	return gcd(b%a,a);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,x,n,k,y;
		scanf("%lld %lld %lld",&n,&a,&k);
		x=(a*n*(n-1)+360*(n-2)-2*a*n)*(k-1);
		y=n*(n-1);
		printf("%lld %lld",x/gcd(x,y),y/gcd(x,y));
	}
	return 0;
}