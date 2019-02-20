#include <stdio.h>
#include<math.h>
int main(void) {
    float x1,x2;
	int A,B,C;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	x1=(-B+sqrt(B*B-4*A*C))/(2.0*A);
	x2=(-B-sqrt(B*B-4*A*C))/(2.0*A);
	printf("%f\n%f",x1,x2);
	return 0;
}

