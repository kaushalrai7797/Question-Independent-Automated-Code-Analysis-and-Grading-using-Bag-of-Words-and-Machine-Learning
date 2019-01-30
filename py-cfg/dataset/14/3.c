#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d",&a, &b);
	int sub=a-b;
	int i=sub%10;
	if( i == 0 )
		sub++;
	else if( i <= 9)
		sub--;

	return 0;
}