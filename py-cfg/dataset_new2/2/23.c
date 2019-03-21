#include <stdio.h>
int main(){
	long long a,b,x,y,count=0,m,n,l,k,gcd;
	scanf("%I64d %I64d %I64d %I64d",&a,&b,&x,&y);
	m=x;n=y;
	while(m!=n)
	{
		if(m>n)
		m=m-n;

		if(n>m)
		n=n-m;
	}
	gcd=m;
	y=y/m;
	x=x/m;

	if(a/x>b/y)
	printf("%I64d",b/y);
	else
	printf("%I64d",a/x);

}
