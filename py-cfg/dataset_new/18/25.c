#include <stdio.h>

int main(void) {
	
        static  int s;
        int T;
     int N ,X;
        scanf("%d ", &T);
        long int *d,*q ;
        d= (long int*)malloc(N*sizeof(long int));
        q= (long int*)malloc(X*sizeof(long int));
        for (int i=0 ; i<T ;i++)
        {
            
            scanf( "%d %d ",&N,&X);

            for (int i=0 ; i<N ;i++)
                scanf ("%d",&d[i]);
            for (int i=0 ; i<X ;i++)
                scanf ("%d",&q[i]);


            for (int i=0 ; i<X ;i++)
            {
                s = q[i];
                for( int j=0; j<N ; j++)
                {
                    s/=d[j];
                }
                printf ("%d ",s);
            }
        }
	return 0;
}

