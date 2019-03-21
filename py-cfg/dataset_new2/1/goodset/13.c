#include<stdio.h>
#include<string.h>
int main()
{
	char str[400];
	int t,l,i,flag;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[26]={0};
		gets(str);
		l=strlen(str);
		flag=0;
		for(i=0;i<l;i++)
		{
			if(str[i]>=65&&str[i]<=90)
			a[str[i]-65]=1;
			else if(str[i]>=97 && str[i]<=122)
			a[str[i]-97]=1;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]==0)
			{
				printf("%c\n",i+65);
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("~\n");
	}
	return 0;
}
