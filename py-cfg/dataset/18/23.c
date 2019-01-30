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
		for(i=0;i<30;i++)
		{
			ra[i]=0;
			sa[i]=0;
		}
		for(i=0;i<n;i++)
			ra[r[i]-97]++;
		for(i=0;i<m;i++)
			sa[s[i]-97]++;
		int ans=1;
		for(i=0;i<30;i++)
		{
			if(ra[i]!=0&&sa[i]!=0&&sa[i]!=ra[i])
				ans=0;
		}
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
}