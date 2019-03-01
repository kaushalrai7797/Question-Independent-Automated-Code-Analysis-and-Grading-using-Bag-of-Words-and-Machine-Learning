#include<stdio.h>

int main(void)
{
int t;
scanf("%d",&t);
while(t--!=0)
{
int n;    
int i,c,r;

int l[100000000],g[100000000];
c=0;
r=0;
scanf("%d",&n);
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
printf("front\n");
else if(r==n && c!=n)
printf("back\n");
else if(c==n && r==n)
printf("both\n");
else
printf("None\n");
}
return 0;
}