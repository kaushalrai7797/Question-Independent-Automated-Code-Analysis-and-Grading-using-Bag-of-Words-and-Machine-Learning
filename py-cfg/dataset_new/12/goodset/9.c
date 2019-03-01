#include<stdio.h>

long long int A[100100];

int main()
{ long long int T,i,d,j,N,F,z;
  scanf("%lld",&T);
  
  for(i=1;i<=T;i++)
 {scanf("%lld",&N);
   
  for(j=1;j<=N;j++)
  {scanf("%lld",&d);    
   A[d]=A[d]+1;
  }
  z=0;
  scanf("%lld",&F);
   
  for(j=1;j<=F;j++)
  {scanf("%lld",&d);    
   
   if(A[d]<1)
   {z=z+1;
    break;}
   
  }
  
  if(z>0)
  printf("No\n");
  else
  printf("Yes\n");    
  
  for(j=0;j<=100099;j++)
  A[j]=0;
 }
 
 return 0;
} 