#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,a[30];
	scanf("%d",&t);
	getchar();
	while(t)
	{
		char str[315];
		gets(str);
		l=strlen(str);
		for(i=0;i<26;i++)
                  {
			a[i]=0;
		    }
		for(i=0;i<l;i++)
		{
			if(str[i]>=97 && str[i]<=122)
			  {
			    a[str[i]-97]++;
			  }
			  else if(str[i]>=65 && str[i]<=90)
			  {
			  	a[str[i]-65]++;
			  }
		}
		for(i=0;i<26;i++)
		{
			if(a[i]==0)
			{
				printf("%c\n",i+97);
				break;
			}
		}
		if(i==26)
		{
			printf("~\n");
		}
		t--;
	}
	return(0);
}
