#include<stdio.h>
#include<stdlib.h>
int check(long int * p,long int * q,int l)
{
  int i;
  for(i=0;i<l;i++)
  { 
    if(p[i]>q[i])
      return 1;
  } 
  return 0;
}
int main()
{
  int T,N,i,wear_front,wear_back;
  long int * l,* g,* gr;
  scanf("%d",&T);
  while(T>0)
  { 
     scanf("%d",&N);
     l=(long int*)malloc(sizeof(long int)*N);
     for(i=0;i<N;i++)
      scanf("%ld",l+i);
     g=(long int*)malloc(sizeof(long int)*N);
     gr=(long int*)malloc(sizeof(long int)*N);
     for(i=0;i<N;i++)
      scanf("%ld",g+i);
     wear_front=check(l,g,N);
     for(i=0;i<N;i++)
      *(gr+i)=*(g+N-1-i);
     wear_back=check(l,gr,N);
     if(wear_front==0 && wear_back==0)
       printf("both\n");
     else 
     {
       if(wear_front==0)
         printf("front\n");
       else if(wear_back==0)
         printf("back\n");
       else
         printf("none\n");}
     T--;
   }
   return 0;
}
