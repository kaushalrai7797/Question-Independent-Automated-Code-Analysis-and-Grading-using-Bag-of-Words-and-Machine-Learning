#include<stdio.h>

long long int A[1000100];

int main()
{ long long int i,j,T,d,N,M,count;
 
  scanf("%lld",&T);
 
  for(i=1;i<=T;i++)
  {scanf("%lld%lld",&N,&M);
   count=0;
   for(j=1;j<=N;j++)
   {scanf("%lld",&d); 
    A[d]=A[d]+1;}
         
   for(j=1;j<=M;j++)
   {scanf("%lld",&d); 
    A[d]=A[d]+1;
    
    if(A[d]==2)
    count=count+1;    
   }
   
   for(j=1;j<=1000000;j++)
   A[j]=0;    
   
   printf("%lld\n",count);
  }
 
    return 0;
} 
         