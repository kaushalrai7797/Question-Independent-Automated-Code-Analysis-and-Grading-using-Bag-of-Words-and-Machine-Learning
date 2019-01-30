#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long int
#define M 750000
#define MOD 1000000007
int main()
{
    ll t;
    scanf("%lld",&t);
    ll dp[M];
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll a[n];
        ll i,j;
        ll hash[M];
        for(i=0;i<M;i++)
            hash[i]=0;
        ll x;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x);
            hash[x]=1;
            a[i]=x;
        }
        for(i=0;i<M;i++)
            dp[i]=0;
        ll sum=0;
        for(i=1;i<M;i++)
        {
            if(hash[i])
            {
                dp[i]++;
                dp[i]%=MOD;
                sum++;
                sum%=MOD;
                for(j=2*i;j<M;j+=i)
                {
                    if(hash[j])
                    {
                        dp[j]+=dp[i];
                        dp[j]%=MOD;
                        sum+=dp[i];
                        sum%=MOD;
                    }
                }
            }
        }
        printf("%lld\n",sum%MOD);
    }
    return 0;
}
