#include<stdio.h>

int main()
{
int n,k,i,t,a[100],b[11],c;
scanf("%d",&t);

while(t--)
{
scanf("%d%d",&n,&k);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<k+1;++i)
b[i]=0;

for(i=0;i<n;++i)
{
a[i]=a[i]%(k+1);
b[a[i]]++;
}
c=0;
for(i=0;i<k+1;++i)
if(b[i]>=n-1)
{
c=1;
break;
}

c?printf("YES\n"):
printf("NO\n");
}
return 0;
}
