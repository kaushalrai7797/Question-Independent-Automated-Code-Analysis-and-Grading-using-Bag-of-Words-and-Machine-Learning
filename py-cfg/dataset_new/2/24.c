#include <stdio.h>

int main(void) {
   int T;
   scanf("%d",&T);
   while(T--)
    {
        int N,M;
        scanf("%d%d",&N,&M);
        int x,j,b=0;
        int a[100001]={0};
        for(j=0;j<N;j++)
            scanf("%d",&x);
             a[x]=1;
            
        for(j=0;j<M;j++)
         {   scanf("%d",&x);
              if(a[x]==1)
              b+=1;
       }
    printf("%d\n",b);
    }
    return 0;
}

