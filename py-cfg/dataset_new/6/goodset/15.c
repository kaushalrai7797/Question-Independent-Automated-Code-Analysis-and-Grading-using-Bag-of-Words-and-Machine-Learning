#include <stdio.h>
long long int gcd(int x,int y)
{
    if(y==0)
    return x;
    else
    return gcd(y,x%y);
}

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a,k,p=0,g=0,d=0,x=0;
        scanf("%lld %lld %lld",&n,&a,&k);
        p=(n-2)*180;
        g=(n-1)*n*a+((2*p-2*a*n)*(k-1));
        d=(n-1)*n;
        x=gcd(g,d);
       
        printf("%lld %lld\n",g/x,d/x);
        
    }
	return 0;
}

