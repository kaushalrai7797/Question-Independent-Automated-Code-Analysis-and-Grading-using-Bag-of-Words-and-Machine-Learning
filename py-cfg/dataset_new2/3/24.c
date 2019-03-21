#include<stdio.h>
int main()
{
    long long int n,s,i,sum=0;
    scanf("%lld",&n);
    s=(n*(n+1))/2;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    if(sum==s)
     printf("%YES\n");
    else
     printf("NO\n");
}
