#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int t;
	scanf("%d",&t);
	char str[1000];
	getchar();
	while(t--)
	{
		int b[26]={0},i;
		gets(str);
		int len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(isalpha(str[i]))
			{
				tolower(str[i]);
				b[str[i]-'a']++;
			}
		}
		int flag=0;
		for(i=0;i<26;i++)
		{
			if(b[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("%c\n",'A'+i);
		else
			printf("~\n");
	}
}
