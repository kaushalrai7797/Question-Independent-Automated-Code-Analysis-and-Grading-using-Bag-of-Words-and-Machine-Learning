#include <stdio.h>
#include <math.h>

int main(void) {
	float a,b,c,d,x1,x2;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	d=(b*b)-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("%f\n",x1);
	printf("%f",x2);
	return 0;
}

