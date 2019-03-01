#include <stdio.h>

int main(void) {
    int n; float r,n1;
	scanf("%d",&n);
	scanf("%f",&n1);
	if((n%5!=0)||(n>n1))
	{
	    printf("%0.2f",n1);
	}
	else
	{
	    r=n1-n-0.50;
	    printf("%0.2f",r);
	}
	return 0;
}
