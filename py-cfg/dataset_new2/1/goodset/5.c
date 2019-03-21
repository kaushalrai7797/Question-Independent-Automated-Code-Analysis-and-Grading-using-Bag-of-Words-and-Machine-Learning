#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
int t,i,k,p,flag=0;
char s[1000],c;
scanf("%d",&t);getchar();
while(t--)
{
	int a[126]={0};
	gets(s);
	for (i=0;s[i]!='\0';i++)
	{
		if (isupper(s[i]))
			s[i]=s[i]+32;
		k=s[i];
		a[k]=1;
	}
	for (c='a';c<='z';c++)
	{p=c;
	if (a[p]==0){
		printf("%c\n",c);break;}
	}
	if (c>'z')
		printf("~\n");
}
return 0;
}
