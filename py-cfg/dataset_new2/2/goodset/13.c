#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, x, y, n, m;

    scanf("%I64d%I64d%I64d%I64d", &a, &b, &x, &y);

    n=x;
    m=y;

    while(n>0 && m>0)
    {
        if(n>m)n=n%m;
        else m=m%n;
    }

    if(n<m) n=m;

    x=x/n;
    y=y/n;

    a=a/x;
    b=b/y;

    if(a>b)a=b;

    printf("%I64d", a);
    return 0;
}
