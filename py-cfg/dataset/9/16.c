#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int max(int x, int y, int z)
{
    if(x>=y && x>=z)
        return x ;
    if(y>=x && y>=z)
        return y ;
    if(z>=x && z>=y)
        return z ;
}

int main()
{
    int T ;
    scanf("%d",&T) ;

    while(T--)
    {
        long long int nsteps, cost ;

        scanf("%lld %lld", &nsteps, &cost) ;

        if(nsteps<=cost)
            printf("0\n") ;
        else
        {
            long long int k = nsteps/cost ;

            if(k%2==0)
            {
               long long int p1, p2 ;
               p1 = k/2 ;
               p2 = p1+1 ;

               long long int ans1 = p1*(nsteps-p1*cost) ;
               long long int ans2 = p2*(nsteps-p2*cost) ;

               if(ans1>=ans2)
                    printf("%lld\n",ans1) ;
               else
                printf("%lld\n",ans2) ;
            }
            else
            {
               long long int p = k/2 ;
                p = p+1 ;

                long long int ans = p*(nsteps-p*cost) ;
                printf("%lld\n",ans) ;
            }
        }
    }
    return 0;
}
