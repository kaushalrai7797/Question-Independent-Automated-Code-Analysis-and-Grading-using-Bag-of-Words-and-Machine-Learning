#include<stdio.h>
int main()
 {
    int n; float n1;
	scanf("%d",&n);
	scanf("%f",&n1);
	if((n1>=n+0.50)&&(n%5==0))
	printf("%0.2f",n1-n-0.50);
	else
	printf("%0.2f",n1);
	return 0;
}
