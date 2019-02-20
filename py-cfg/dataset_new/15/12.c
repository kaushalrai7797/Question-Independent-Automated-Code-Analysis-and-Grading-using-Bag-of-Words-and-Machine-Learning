#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i,fl[n],gl[n];
		for(i=0;i<n;i++)
			scanf("%d",&fl[i]);
		for(i=0;i<n;i++)
			scanf("%d",&gl[i]);
		int ff=0,fb=0;
		for(i=0;i<n;i++)
		{
			if(gl[i]>=fl[i])
				ff++;
		}
		for(i=0;i<n;i++)
		{
			if(gl[n-1-i]>=fl[i])
				fb++;
		}
		if(ff==n && fb==n)
			printf("both\n");
		else if(ff==n)
			printf("front\n");
		else if(fb==n)
			printf("back\n");
		else
			printf("none\n");
	}
	return 0;
}