#include <stdio.h>

int main(void) {
	int A,B,C,x1,x2,s,u,w;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	s=B*B;
	u=4*A*C;
	w=sqrt(s-u);
	x1=(-B+w)/2*A;
	x2=(-B-w)/2*A;
	printf("%d\n",x1);
	printf("%d",x2);
	return 0;
}

