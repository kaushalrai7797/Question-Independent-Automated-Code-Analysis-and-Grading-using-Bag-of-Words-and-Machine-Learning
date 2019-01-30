#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,b;
        scanf("%lld %lld",&n,&b);
        printf("%lld\n",n*n/(4*b));
    }
}