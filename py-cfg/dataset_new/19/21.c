#include<stdio.h>
int main()
{
 int n,k,i,j;
scanf("%ld%ld",&n,&k);
long int a[n];
for(i=0;i<n;i++)
{
if(i<k)
a[i]=1;
else
{
a[i]=0;
for(j=i-1;j>=(i-k);j--)
{
a[i]+=a[j]%1000000007;
}
}
}
printf("%ld",a[n-1]%1000000007);
return 0;
}
