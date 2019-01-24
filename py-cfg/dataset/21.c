#include<stdio.h>
int main()
{
int t;
scanf("%d ",&t);
while(t--)
{
int n ,k;
scanf("%d %d ",&n,&k);
int a[n];
int i;
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
int count =0;
if(a[0]>k)
{
if(a[0]%k==0)
count += (a[0]/k) -1;
else
count += (a[0]/k) ;
}
for(i=0;i<(n-1);i++)
{
if(a[i+1]-a[i] <= k)
continue;
else
{
if((a[i+1]-a[i])%k == 0)
count += ((a[i+1]-a[i])/k ) - 1;
else
count += (a[i+1]-a[i])/k ;
}}
printf("%d ",count);
printf("\n");
}
return 0;
}