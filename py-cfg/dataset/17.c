#include<stdio.h>
main()
{
	int t,n,k;
	scanf("%d",&t);
	{
		while(t !=0)
		{
			scanf("%d %d",&n,&k);
			int h[n],s=0,i;
			h[0]=0;
			for(i=1;i<=n;i++)
			{
				scanf("%d",&h[i]);
			}
			for(i=1;i<=n;i++)
			{
				while(h[i]-h[i-1] > k)
				{
					h[i-1]=h[i-1]+k;
					s++;
				}
				
				
			}
			printf("%d\n",s);
			
			t--;
		}
	}
}