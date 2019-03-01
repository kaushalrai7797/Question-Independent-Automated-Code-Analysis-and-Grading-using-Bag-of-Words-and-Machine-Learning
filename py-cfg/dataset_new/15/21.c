#include<stdio.h>

int main()
{
int t;
scanf("%d \n",&t);
while(t--)
{
int n;    
int i,c,r,m;

int l[20],g[20];
c=0;
r=0;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d",&l[i]);
}
for(i=0;i<n;i++)
{
scanf("%d",&g[i]);
}
for(i=0;i<n;i++)
{
if(l[i]<g[i] || l[i]==g[i])
c++;
if(l[i]>g[n-1-i] || l[i]==g[n-1-i])
r++;
}
if(c==n && r!=n)
printf("\n front\n");
else if(r==n && c!=n)
printf("\nback\n");
else if(c==n && r==n)
printf("\nboth\n");
else
printf("\nNone\n");
}
return 0;
}