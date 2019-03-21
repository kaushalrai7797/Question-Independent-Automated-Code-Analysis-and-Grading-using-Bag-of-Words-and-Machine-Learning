#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	char str[314];
	gets(str);
	while(t--)
	{
		gets(str);
		int arr[26],i,cnt=0;
		char ch;
		for(i=0;i<26;i++) arr[i]=0;
		int l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>=65&&str[i]<=90)
			{
				arr[str[i]%65]=1;
			}
			else if(str[i]>=97&&str[i]<=122)
			{
			    arr[str[i]%97]=1;
		     }
		}
		for(i=0;i<26;i++) if(arr[i]==1) cnt++;
		if(cnt==26) printf("~");
		else
		{
			for(i=0;i<26;i++)
			{
				if(arr[i]==0)
				{
					ch=i+97;
					printf("%c",ch);
				}
			}
		}
		printf("\n");
	}
}
