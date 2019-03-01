#include <stdio.h>
#include<math.h>
int main(void) {
	int a,b,c;
	scanf("%i%i%i",&a,&b,&c);
	float x1,x2;
	x1=(-b+sqrt(b*b-4*a*c))/(2.0*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2.0*a);
	printf("%f\n%f",x1,x2);
	return 0;
}