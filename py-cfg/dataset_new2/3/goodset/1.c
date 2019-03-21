#include<stdio.h>
int main()
{
 int n,i,sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  int a[n];
  scanf("%d",&a[i]);
 {
  sum=sum+a[i];
  }
 }
  int ans=n*(n+1)/2;
  if(sum==ans)
  {
	printf("YES\n");
  }
  else
  {
	printf("NO\n");
  }
  return 0;
}
