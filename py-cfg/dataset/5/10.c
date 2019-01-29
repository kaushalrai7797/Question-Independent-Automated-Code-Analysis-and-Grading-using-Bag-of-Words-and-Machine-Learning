#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vl vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define test() ll tt;cin>>tt;for(ll testcase=1;testcase<=tt;testcase++)
#define all(v) v.begin(),v.end()
#define vivek_ghosh ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 1000055
#define mod 1000000007
#define ff first
#define ss second
const int INF=0x3f3f3f3f;

ll power(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return power((x*x)%M,n/2,M);
    else
        return (x*power((x*x)%M,(n-1)/2,M))%M;
}

ll modinv(ll a,ll m)
{
    ll g =__gcd(a, m);
    ll res=power(a, m-2, m);
    return res;
}

ll n,m,i,j,k,ans=0,cnt=0,sum=0,mx=-1,mn=INT_MAX;

int main()
{
    vivek_ghosh;

    test()
    {
        cin>>n>>m;
        ll a[n];
        ll b[m];
        for(i=0;i<n;i++)
            cin >> a[i];

        for(i=0;i<m;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+m);
        if(n==m)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]!=0 && a[i]!=b[i])
                    break;
            }
            if(i<n)
                cout<<"Alice";
            else
                cout<<"Bob";
        }
        else
            cout<<"Alice";
        cout<<endl;
    }

    return 0;
}