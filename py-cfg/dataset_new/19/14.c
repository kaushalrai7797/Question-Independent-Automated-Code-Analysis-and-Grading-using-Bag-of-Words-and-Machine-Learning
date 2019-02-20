#include<stdio.h>
long long int function(int n,int k)
{
    int i;
    long long int sum=0;
    if(n<=k)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=k;i++)
        {
           sum=sum+function(n-i,k); 
        }
        return sum;
    }
}
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    long long int f=function(n,k);
    int result=f%1000000007;
    printf("%d\n",result);
}
