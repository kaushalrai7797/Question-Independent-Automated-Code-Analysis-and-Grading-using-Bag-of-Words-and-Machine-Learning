#include<stdio.h>
#include<string.h>
int main()
{
int t,i,j,sn,m;
char s[100];
scanf("%d",&t);
while(t--)
{  sn=0,m=0;
scanf("%s",s);
j=strlen(s);
for(i=0;i<j;i++)
{
if(s[i]=='s')
sn++;
else if(s[i]=='m')
m++;
}
for(i=0;i<j;i++)
{
if(s[i]=='s'&&s[i+1]=='m')
{
sn--;s[i+1]='0';
}
else if(s[i]=='m'&&s[i+1]=='s')
{
sn--;s[i]='0';
}
}
if(sn>m)
printf("snakes\n");
else if(m>sn)
printf("mongooses\n");
else
printf("tie\n");
}
return 0;
}


