#include <stdio.h>
long long int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		gcd(y,x%y);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int num,a,k,x,y,val,sum;
		scanf("%lld%lld%lld",&num,&a,&k);
		
		sum=(num-2)*180;
		x=a*num*(num-1)+((2*sum-2*a*num)*(k-1));
		y=num*(num-1);
		val=gcd(x,y);
		printf("%lld %lld\n",x/val,y/val);
	}
	return 0;
}

