#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
if (b != 0)
       return gcd(b,a%b);
    else
       return a;
}
int main(void)
{
long long int a,r,b,x,y,i=1;
scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
r=gcd(x,y);
y=y/r;
x=x/r;
i=(a/x<b/y? a/x:b/y);
printf("%lld",i);
return 0;
}
