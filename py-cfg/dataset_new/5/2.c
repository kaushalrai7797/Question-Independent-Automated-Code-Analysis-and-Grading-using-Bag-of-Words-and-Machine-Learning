#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int x1,x2;
	x1=(-b+(float)sqrt(b*b-4*a*c))/2*a;
	x2=(-b-(float)sqrt(b*b-4*a*c))/2*a;
	printf("%d\n%d",x1,x2);
	return 0;
}
