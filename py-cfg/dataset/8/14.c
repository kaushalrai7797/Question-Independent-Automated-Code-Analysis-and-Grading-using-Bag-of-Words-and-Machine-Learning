#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n],j;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;)
		{
			if((j+1)<n)
			{
				if((j+1)<n && a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					k--;
				}
				
			}
			j=j+2;
		}
		int c1=0,c2=0;
		for(j=0;j<n;j++)
		{
			if(j%2==0)
			{
				c1=c1+a[j];
			}
			else
			{
				c2=c2+a[j];
			}
		}
		if(c1<c2)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
	}
}
