//
// Created by shreyanshu on 2/7/18.
//

#include <stdio.h>

int min1(int n){
    if( n <=1 )
        return 2;
    else
        return (n+1)+min1(n/2)+min1(n-1-n/2);
}
int main() {
    int t,n,m,min,max;

    scanf("%d",&t);

    while ( t-- ){
        scanf("%d%d",&n,&m);
        min=n+1+min1(n/2)+min1(n-1-n/2);
        max=n*(n+3)/2;

        if(m >= min && m <= max )
            printf("0\n");
        else
            if( m > max )
                printf("%d\n",m-max);
            else
                printf("-1\n");

    }

    return 0;
}
