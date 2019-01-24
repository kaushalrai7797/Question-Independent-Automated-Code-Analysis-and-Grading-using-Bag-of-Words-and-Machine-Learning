#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n,k;
	
	while(t--)
	{
		scanf("%d %d",&n,&k);
		int a[n],i,l,p,r,c=0;
		
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		p=a[0]-0;
		if(p>k)
		{
			if((p%k)==0)
			c+=((p/k)-1);
			else
			c+=(p/k);
		}

		for(i=0;i<n-1;i++)
		{
			l=a[i+1]-a[i];
			if(l>k)
			{
				if((l%k)==0)
				c+=((l/k)-1);
				else
				c+=(l/k);
			}
		}
		printf("%d\n",c);
	}
return 0;
}
