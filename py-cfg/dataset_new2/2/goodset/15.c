#include <stdio.h>

long long int gcd(long long int a,long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){

    long long int a,b,x,y,var,l,m;
    scanf("%lld%lld%lld%lld",&a,&b,&x,&y);

    var = gcd(x,y);
    x = x/var;
    y = y/var;
    l = a/x;
    m = b/y;
    printf("%lld",(l > m ? m : l));
    return 0;
}
