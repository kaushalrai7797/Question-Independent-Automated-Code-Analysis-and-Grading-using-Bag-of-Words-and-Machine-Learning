#include <stdio.h>
#include <math.h>

int main(void) {
    int a,b,c,z1,z2,d;
	scanf("%d%d%d",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
	z1=(-b+(d))/(2*a);
	 z2=(-b-(d))/(2*a);
	 printf("%d\n",z1);
	 printf("%d\n",z2);
	return 0;
}

