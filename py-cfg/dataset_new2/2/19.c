#include <stdio.h>
long long gcd(long long a, long long b)
{
    long long tmp;
    while(b%a!=0)
    {
        tmp=a;
        a=b%a;
        b=tmp;
    }
    return a;
}
int main()
{
    long long a, b, x, y;
    long long r1=0, r2=0, g;
    scanf("%I64d%I64d%I64d%I64d", &a, &b, &x, &y);
    g=gcd(x,y);
    x/=g;
    y/=g;
    r1=a/x;
    r2=b/y;
    if((r1*y)<=b) printf("%I64d\n", (long long)r1);
    else if((r2*x)<=a) printf("%I64d\n", r2);
    else printf("0\n");
    return 0;
}
