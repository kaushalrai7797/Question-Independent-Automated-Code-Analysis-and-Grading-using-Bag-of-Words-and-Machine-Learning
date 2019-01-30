#include<stdio.h>
#define MAX 100
int main()
{
	int t,n,m,aflag,bflag,i;
	long long a[MAX],b[MAX],asum,bsum;
	scanf("%d",&t);
	while(t--)
	{
		aflag=bflag=asum=bsum=0;
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%lld",a+i);
			asum+=a[i];
			if(a[i]==0)
			aflag++;
		}
		for(i=0;i<m;i++)
		{
			scanf("%lld",b+i);
			bsum+=b[i];
			if(b[i]==0)
			bflag++;
		}
		if(bflag&&aflag)
		{
		   printf("Bob\n");
     	}
     	else if((bflag&&(!aflag))||(aflag&&(!bflag)))
     	{
		 printf("Alice\n");
		 }
     	else
     	{
     		if(asum-n==bsum-m)
     		printf("Bob\n");
     		else
     		printf("Alice\n");
		 }
	}
}