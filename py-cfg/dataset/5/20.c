#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef long long int lint ;

int check(lint n)
{
    while(n)
    {
        if(n%10!=0 && n%10!=1 && n%10!=4 && n%10!=9)
            return 0 ;

            n = n/10 ;
    }
    return 1;
}


int main()
{
   int T ;
   scanf("%d",&T) ;
    while(T--)
    {
        lint a, b ;
        lint arr[103] ;
        scanf("%lld %lld", &a, &b) ;

        int i, j=0, count=0,ans=0 ;

        for(i=0;i<=100000;i++)
        {
            if(check(i*i))
            {arr[j] = i*i ;
             j++ ;
             }
        }

        for(int k=0;k<103;k++)
        {
            if(arr[k]>=a && arr[k]<=b)
                ans++ ;
        }
        printf("%d\n",ans) ;

    }
     return 0;
}

