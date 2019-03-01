#include <stdio.h>
#include <math.h>

int main(void) {
	int a,b,c,d,x1,x2;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=(b*b)-4*a*c;
	x1=-b+sqrt(d)/2*a;
	x2=-b-sqrt(d)/2*a;
	printf("%d\n",x1);
	printf("%d",x2);
	return 0;
}

