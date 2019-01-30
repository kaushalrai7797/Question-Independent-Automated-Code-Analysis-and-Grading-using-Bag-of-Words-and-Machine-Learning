#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		char r[1010],s[1010];
		scanf("%s%s",r,s);
		int n=strlen(r);
		int m=strlen(s);
		int ra[30],sa[30],a[30],b[30];
		for(i=0;i<30;i++)
		{
			ra[i]=0;
			sa[i]=0;
			a[i]=0;
			b[i]=0;
		}
		for(i=0;i<n;i++)
		{
			ra[r[i]-97]++;
			a[r[i]-97]=1;
		}
		for(i=0;i<m;i++)
		{		
			sa[s[i]-97]++;
			b[s[i]-97]=1;
		}
		int q=1;
		int q1=1;
		for(i=0;i<30;i++)
		{
			if(sa[i]!=ra[i])
				q=0;
		}
		for(i=0;i<30;i++)
		{
			if(a[i]!=b[i])
				q1=0;
		}
		if(q==q1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
