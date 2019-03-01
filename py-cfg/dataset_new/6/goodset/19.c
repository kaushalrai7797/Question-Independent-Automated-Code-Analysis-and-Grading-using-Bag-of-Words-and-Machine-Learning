#include <stdio.h>
long int gcd(int x,int y)
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
		 int num,a,k,x,y,val,sum;
		scanf("%d%d%d",&num,&a,&k);
		
		sum=(num-2)*180;
		x=a*num*(num-1)+((2*sum-2*a*num)*(k-1));
		y=num*(num-1);
		val=gcd(x,y);
		printf("%d %d\n",x/val,y/val);
	}
	return 0;
}

