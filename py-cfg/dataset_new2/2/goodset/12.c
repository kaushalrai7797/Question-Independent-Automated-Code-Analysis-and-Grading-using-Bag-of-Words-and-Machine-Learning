#include<stdio.h>
long long int hcf(long long int x,long long int y)
{
	if(x==0)
	return y;
	else if( y==0)
	return x;
	if(x<y)
	return hcf(y,x);
	else
	return hcf(y,x%y);
}
int main()
{
	long long int a,b,x,y,i,j,k;
	scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
	k=hcf(x,y);

	x=x/k;
	y=y/k;
	if(a/x<=b/y)
	printf("%lld\n",a/x);
	else
	printf("%lld\n",b/y);
}
