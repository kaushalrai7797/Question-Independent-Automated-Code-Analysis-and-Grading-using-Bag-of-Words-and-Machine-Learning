#include<string.h>
#include<stdio.h>

int main()
{
	int i,c[27],d[27],t,u,v;
	char a[10010],b[1010];
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;
		scanf("%s",a);
		scanf("%s",b);
		for(i=0;i<26;i++)
			c[i]=0;
		for(i=0;i<26;i++)
			d[i]=0;
		for(i=0;i<strlen(a);i++)
			c[a[i]-'a']++;
		for(i=0;i<strlen(b);i++)
			d[b[i]-'a']++;
		
		for(i=0;i<26;i++)
		{
			if(c[i]!=d[i])
			{
				printf("NO\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
	}
	return 0;
}