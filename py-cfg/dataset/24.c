#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a,b,c;
		b=0;
		scanf("%d",&a);
		while(a!=0)
		{
			b*=10;
			c=a%10;
			a/=10;
			b+=c;
		}
		printf("%d\n",b);
	}
}