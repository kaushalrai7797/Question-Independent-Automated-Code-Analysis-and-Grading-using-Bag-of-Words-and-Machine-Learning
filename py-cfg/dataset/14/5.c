#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Plz enter any two number between 1 to 10000 :");
	scanf("%d %d",&a,&b);
	c=a-b;
	if(c==0 || c==10 || c==100 || c==1000)
	{
		c++;
	}
	else
	{
		c--;
	}
	printf("\nYour answer is %d",c);
	return 0;
}