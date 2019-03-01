

#include<stdio.h>
int main()
{
	int i,t,a,b,c,d,j,k,x=0,y=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int count=0;
		for(j=c;j<=d;j++)
		{
			y=j;
			for(k=a;k<=b;k++)
			{
				x=k;
			}
			if(y>x)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
