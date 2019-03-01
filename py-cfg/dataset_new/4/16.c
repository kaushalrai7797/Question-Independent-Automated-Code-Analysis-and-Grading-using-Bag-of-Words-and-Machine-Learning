#include<stdio.h>

 int sol( int a, int b, int c, int d)
{
 int i=a,j;
 int ctr=0;
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
scanf("%d",&a[i]);
scanf("%d",&b[i]);
scanf("%d",&c[i]);
scanf("%d",&d[i]);
i++;
}
i=0;
while(i<t)
{
printf("\n%d",sol(a[i],b[i],c[i],d[i]));
i++;
}
return 0;
}
