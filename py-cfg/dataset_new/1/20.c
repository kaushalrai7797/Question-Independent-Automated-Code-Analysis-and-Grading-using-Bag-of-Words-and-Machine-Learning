#include<stdio.h>
int main()
{
 int t,c,n,i,j;
 long long int a[100000];
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  c=n;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  for(j=i;j<n-1;j++)
  if(a[j]<=a[j+1])
  c++;
  else
  break;
  printf("%d\n",c);
 }
}