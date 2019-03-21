#include<stdio.h>

#define ll long long int

ll gcd(ll a, ll b)
{
	return (a%b ? gcd(b,a%b):b);
}

ll mn(ll a, ll b)
{
	return (a<b ? a:b);
}

int main()
{
	ll a, b, x, y;
	scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
	ll dvd = gcd(x,y);
	x /= dvd, y/=dvd;
	printf("%lld\n",mn(a/x,b/y));
	return 0;
}
