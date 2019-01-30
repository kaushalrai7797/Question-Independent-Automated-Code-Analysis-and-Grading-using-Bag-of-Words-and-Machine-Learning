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
      qsort(b,n-m,sizeof(int),cmp);
      int i=0,j=n-m-1;
      while(k-- && d>=0)
      {
       if(b[j]>a[i] && (j>=0 && i<m))
       {
         d-=2*(b[j--]-a[i++]);
       }
       else {flag=1;
       break;}
      }
      if(flag)
      {
        printf("NO\n");
      }
      else printf("YES\n");
    } 
  }
  return 0;
}