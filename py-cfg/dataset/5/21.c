#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef long long int lint ;

int check(lint n)
{
    int arr[11] ;
    int i, j ;
    for(i=10;i>=0;i--)
    {
        arr[i]=n%10 ;
        n = (n-(n%10))/10 ;
        if(n==0)
            break ;
    }

    for(j=10;j>=i;j--)
    {
        if(arr[j]!=0 && arr[j]!=1 && arr[j]!=4 && arr[j]!=9)
            break ;
    }

    if(j==i-1)
        return 1 ;
    else
        return 0 ;


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

