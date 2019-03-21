#include<stdio.h>

	#include<string.h>

	int main()

	{

	int t,i,a[200];char s[1000],c;

	scanf("%d",&t);

	scanf("%c",&c);

	while(t--)

	{

	gets(s);

	for(i='A';i<='Z';i++)a[i]=0;

	for(i=0;i<strlen(s);i++)

	a[toupper(s[i])]++;

	for(i='A';i<='Z';i++)

	if(a[i]==0)

	{printf("%c\n",i);break;}

	if(i==('Z'+1))printf("~\n");

	}

	return 0;

	}
