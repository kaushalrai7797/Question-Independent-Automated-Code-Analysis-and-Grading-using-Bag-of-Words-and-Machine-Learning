#include<stdio.h>
int main(void)
{
	long int a,b,x,y,k=1;
	scanf("%ld%ld%ld%ld",&a,&b,&x,&y);

	for(long int i=2;i<(x<y?x:y);i+=2)
	{
	if(i==4)
	i=3;
		while(x%i==0&&y%i==0)
		{
			x/=i;
			y/=i;
		}
	}

	k=a/x<b/y?a/x:b/y;
	printf("%ld\n",k);
}
