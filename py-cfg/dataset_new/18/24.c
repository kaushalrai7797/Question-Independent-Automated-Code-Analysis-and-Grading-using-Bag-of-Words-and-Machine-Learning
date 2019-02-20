#include <stdio.h>

int main(void) {
        int T;
        long long int N ,X;
        long long d,q,k=1;
        scanf("%d ", &T);
        while(T--)
        {
            
            scanf( "%lld %lld",&N,&X);

            for (int i=0;i<N ;i++)
               { scanf("%lld",&d);
               if(k>1000000000)
               continue;
                k*=d;
               }
            for (int i=0 ; i<X ;i++)
            {
                
               scanf("%lld",&q);

                    q/=k;
                
                printf ("%lld ",q);
            }
            printf("\n");
        }
	return 0;
}

