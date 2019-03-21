#include<stdio.h>
int main()
{
 int n;
 int i,sum=0;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 {
  sum+=a[i];
 }
}
 if(sum==n*(n+1)/2)
 {
  printf("YES\n");
 }
 else
 {
  printf("NO\n");
 }
return 0;
}
