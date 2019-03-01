#include<stdio.h>
#include<stdlib.h>

long long int gcd(long long int a,long long int b)
{
		if(b==0 || a==b){
		return a;
	}
	return gcd(b,a%b);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int a,x,y,n,k;
		scanf("%ld %ld %ld",&n,&a,&k);
		x=(k-1)*(360*(n-2)-2*a*n)+a*n*(n-1);
		y=n*(n-1);
		printf("%lld %lld\n",x/gcd(x,y),y/gcd(x,y));
	}
	return 0;
}