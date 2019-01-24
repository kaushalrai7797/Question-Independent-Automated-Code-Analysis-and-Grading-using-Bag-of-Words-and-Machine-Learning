#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t>0)
  {
    int reach=0,count=0,k,n,i;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      while(a[i]-reach>k)
      {
      reach=reach+k;
      count++;
    }

      reach=a[i];
    }
    printf("%d\n",count);
    t--;
    }

  }
