#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
  if(*(const int *)a > *(const int *)b)
 return 1;
 else if(*(const int *)a < *(const int *)b)
 return -1;
 return 0;
}
int csk(const void *a,const void *b)
{
  if(*(const int *)a > *(const int *)b)
 return -1;
 else if(*(const int *)a < *(const int *)b)
 return 1;
 return 0;
}
int main()
{
  int m,t,n,k,d,flag;
  scanf("%d",&t);
  long tomu,motu;
  while(t--)
  {
    tomu=0;
    motu=0;
    flag=0;
    scanf("%d%d",&n,&k);
    if(n==1)
    {
      printf("NO\n");
      continue;
    }
    m=n/2;
    int a[m],b[n-m];
    for(int i=1;i<=n;i++)
    {
      scanf("%d",&d);
      if(i%2==1)
      {b[(i-1)/2]=d;
      motu+=d;
      }
      else 
      {a[i/2-1]=d;
      tomu+=d;
      }
    }
      if(tomu>motu)
     {
       printf("YES\n");
       continue;
     }
     else if(tomu <= motu && k==0)
     {
       printf("NO\n");
       continue;
     }
    else if(tomu<=motu && k!=0)
    {
      d=motu-tomu;
      qsort(a,m,sizeof(int),cmp);
      qsort(b,n-m,sizeof(int),csk);
      /*for(int i=0;i<m;i++)
      printf("%d ",a[i]);
      printf("\n");
      for(int i=0;i<n-m;i++)
      printf("%d ",b[i]);*/
      int i=0,j=0;
      flag=0;
      while(k-- && j<n-m && i<m)
      {
       if(b[j]>a[i] )
       {
         motu-=(b[j]-a[i]);
         tomu+=(b[j++]-a[i++]);
       }
       if(motu<tomu)
       {flag=1;
       break;
       }
      }
      if(flag)
      printf("YES\n");
      else printf("NO)\n");
    } 
  }
  return 0;
}