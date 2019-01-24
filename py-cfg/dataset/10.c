#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);

	int n,k,i;
	int ini=0;
	int count =0;
	int h[130];
	float diff = 0;
	while(t--)
	{
		ini = 0;
		count = 0;
		scanf("%d %d",&n,&k);
		diff = 0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&h[i]);
			diff = h[i]-ini;
			if(diff<=k)
			{
				count = count;
			}
			else
			{
				count = count+(diff-1)/k;
				ini=h[i];
			}
			ini=h[i];	
		}

		printf("%d\n",count);
	}
	return 0;
}


