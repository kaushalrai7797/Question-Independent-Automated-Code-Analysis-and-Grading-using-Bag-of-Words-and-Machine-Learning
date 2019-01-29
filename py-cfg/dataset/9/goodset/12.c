#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<map>
#include<algorithm>
#define ll long long int
#define MOD 1000000007
#define f(i,n) for(i=0;i<n;i++)
#define fd(i,n) for(i=n-1;i>=0;i--)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll q;
    cin>>q;
    while(q--)
    {
        ll k;
        cin>>k;
        ll sum=0,x=n-1,i=0;
        while(i<=x)
        {
            sum+=a[i];
            x-=k;
            i++;
        }
        cout<<sum<<endl;
    }
}