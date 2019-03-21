#include<stdio.h>
#include<string.h>
int main()
{
int t,i,s=0,c=0;
char a[315],k;
scanf("%d",&t);
while(t--)
{getchar();
	gets(a);
	for (k='a';k<='z';k++)
	{
		for (i=0;a[i]!='\0';i++)
		{
			if (a[i]==k)
			{
				s++;
				break;
			}
		}
		if (s==0)
			{printf("%c",k);c++;}s=0;}
 if (c==0)
printf("~");
	printf("\n");
}
return 0;
}
