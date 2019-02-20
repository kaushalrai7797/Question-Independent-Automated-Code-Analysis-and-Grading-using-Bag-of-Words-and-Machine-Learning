#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		int count=0,count1=0;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]<=b[i])
			count++;
		}
        for(i=0;i<n;i++)
	    {
			if(a[i]<=b[n-1-i])
			count1++;
		}
		//printf("%d",count1);
		if(count==n && count1 !=n)
		printf("front\n");
		if(count1==n && count !=n)
		printf("back\n");
		if(count==n && count1 ==n)
		printf("both\n");
		if(count!=n && count1 !=n)
		printf("none\n");
	}
}