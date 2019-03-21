#include<stdio.h>
int main()
{
int b,r,k,t,n,i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=n;;i++)
{
b=i;
while(n>0)
{
r=b%10;
k=k*10+r;
b=b/10;
}
if(k==i)
{
printf("%d",k);
break;
}
}
printf("\n");
}
return 0;
}
