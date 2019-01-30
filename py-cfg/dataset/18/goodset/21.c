#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char r[1010],s[1010];
		scanf("%s%s",r,s);
		int n=strlen(r);
		int m=strlen(s);
		int ra[30],sa[30];
		int i;
		int a[30],b[30];
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
		int ans=1;
		int ans2=1;
		for(i=0;i<30;i++)
		{
			if(sa[i]!=ra[i])
				ans=0;
		}
		for(i=0;i<30;i++)
		{
			if(a[i]!=b[i])
				ans2=0;
		}
		if(ans==ans2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}