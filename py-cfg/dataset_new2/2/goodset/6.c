#include<stdio.h>
#include<math.h>

int main(void)
{
	long long int a,b,x,y,x1,y1;
	scanf("%lld%lld%lld%lld",&a,&b,&x,&y);

	x1=x;y1=y;
	for(;(x1!=0)&&(y1!=0);)
	{
		if(x1>y1)
			x1%=y1;
		else
			y1%=x1;
	}
	if(x1==0)
		x/=y1,y/=y1;
	else
		x/=x1,y/=x1;

	a/x>b/y ? printf("%lld\n",b/y) : printf("%lld\n", a/x);
	return 0;
}
