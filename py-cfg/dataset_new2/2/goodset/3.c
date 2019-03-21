#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
long long int r=(a%b)?gcd(b,a%b):b;
return r;
}
int main()
{
long long int a,b,x,y;
scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
long long int q=gcd(x,y);
//printf("%d",q);
x=x/q,y=y/q;
long long int ans=(a/x>b/y)?b/y:a/x;
printf("%lld",ans);
}
