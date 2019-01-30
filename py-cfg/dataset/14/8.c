#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	a=a-b;
	if(a%10!=0&&a%10!=1)
	printf("%d",++a);
	else
	printf("%d",--a);
	return 0;
}

