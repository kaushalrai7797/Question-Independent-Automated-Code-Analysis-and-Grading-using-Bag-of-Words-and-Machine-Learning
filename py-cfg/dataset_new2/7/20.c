#include<stdio.h>
#include<math.h>
#include<assert.h>
int main()
{
  int T,N,M;
  int i;
  int max[50],min[50];
  max[0]=min[0]=0;
  for(int i=1;i<=50;i++)
  {
    min[i]=min[i/2]+min[i-(i/2)-1]+i+1;
    max[i]=max[0]+max[i-1]+i+1;
  }
 assert(scanf("%d",&t)==1);
 assert(T>=1&&T<=100);
 while(T--)
   {
     assert(scanf("%d %d",&n,&m)==2);
     assert((N>=1&&N<=100)&&(M>=1&&M<=1000));
     if(min[N]>M) puts("-1");
     else if(min[N]<=M) puts("0");
     else return(M-min[N]);
   }

   return 0;
  } 
