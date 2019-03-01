#include <stdio.h>
#include<math.h>
int main(void) {
    float x1,x2,w,A,B,C,s,u;
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	s=B*B;
	u=4*A*C;
	w=sqrt(s-u);
	x1=(-B+w)/2*A;
	x2=(-B-w)/2*A;
	printf("%f\n",x1);
	printf("%f\n",x2);
	return 0;
}

