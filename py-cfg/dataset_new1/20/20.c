#include<stdio.h>

int main()
{
   int i=0,T;
   scanf("%d",&T);
   while(T--)
   {
       int N,B;
       scanf("%d %d",&N,&B);
       int W[N],H[N],P[N],max=0;
       for (i = 0; i < N; i++)
       scanf("%d %d %d", &W[i],&H[i],&P[i]);

       for(i=0;i<N;i++)
       {

          if(P[i]<=B)
           {
               int a=W[i]*H[i];
               if(a>max) max=a;
           }

       }
       if(max==0)printf("no tablet");
       else printf("%d\n",max);
   }
}


