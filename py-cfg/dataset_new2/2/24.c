#include <stdio.h>

int main()

{

    long long a , b , x , y , i ;

    scanf("%I64d %I64d %I64d %I64d",&a,&b,&x,&y) ;

    for( int p = 2 ; p <= x && p <= y ; )  {

        if( x % p == 0 && y % p == 0 )  {

            x /= p ;  y /= p ;

        }

        else  {

            p++ ;

        }
    }

  /*  for( i = 1 ; x <= a && y <= b ; i++ )  {

        x *= i ;

        y *= i ;

        printf("\n %I64d %I64d\n",x,y) ;

    } */

    x = a/x ; y = b/y ;

    if( x < y )  x = x ;

    else x = y ;

    printf("%I64d\n",x) ;

//    printf("%I64d\n",i-1) ;

    return 0 ;

}
