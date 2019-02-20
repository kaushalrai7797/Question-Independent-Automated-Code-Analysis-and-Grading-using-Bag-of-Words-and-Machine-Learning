#include<stdio.h>

 long long int sol(long long int a,long long int b, long long int c, long long int d)
{
 long long int i=a,j;
 long long int ctr=0;
for(;i<=b;i++)
{
    for(j=c;j<=d;j++)
    {
    if(i<j)
    ctr++;
    }
}
return ctr;
}






int main(void)
{
int t,i=0;
scanf("%d",&t);
int a[20],b[20],c[20],d[20];
while(i<t)
{
scanf("%lld",&a[i]);
scanf("%lld",&b[i]);
scanf("%lld",&c[i]);
scanf("%lld",&d[i]);
i++;
}
i=0;
while(i<t)
{
printf("\n%lld",sol(a[i],b[i],c[i],d[i]));
i++;
}
return 0;
}
