#include<stdio.h>
#include<string.h>
int main()
{
	char str[15],s[3]="nam";
	long int n;
	int t;
	scanf("%d",&t);
	while(t--)
{
	long int c1=1,c2=1,pp=0;
	scanf("%ld",&n);
	while(n--)
{
	scanf("%s",&str);
	int l=strlen(str);
	if((str[l-1]=='n')&&(str[l-2]=='a')&&(str[l-3]=='m'))
	{
	c1++;
	}
	else
	c2++;
	if(pp==0)
	{
	if(c1-c2==2)
	{
	printf("superheroes\n");
    pp++;
	} 
	if(c2-c1==3)
	{
	printf("villains\n");
    pp++;	
	}
    }
}
	if(pp==0)
	printf("draw\n");
}
return 0;
}