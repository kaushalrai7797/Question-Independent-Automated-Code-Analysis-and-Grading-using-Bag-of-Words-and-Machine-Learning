#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
int n,i,j,p,r,m;
scanf("%d",&n);
int k[n];
int ar[n][2];
for(i=0;i<n;i++)
for(j=0;j<2;j++)
scanf("%d",&ar[i][j]);
for(i=0;i<n;i++)
{
k[i]=abs(ar[i][0]-ar[i][1]);
}
for(r=1;r<=n-1;r++)
{
 for(i=0;i<=n-1-r;i++)
 {
   if(k[i]>k[i+1])
    {
     p=k[i];
     k[i]=k[i+1];
     k[i+1]=p;
    }}} 
    for(i=0;i<n;i++)
    {
    if(k[n-1]==abs(ar[i][0]-ar[i][1]))
    { 
        if(ar[i][0]>ar[i][1])
         m=1;
         else
         m=2;
    }}     
    printf("%d %d",m,k[n-1]);
return 0;
}

