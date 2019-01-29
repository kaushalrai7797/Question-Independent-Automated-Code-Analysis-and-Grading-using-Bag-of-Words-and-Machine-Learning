#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
int main()
{
    ios;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,num=0,i;
        string s;
        cin>>n>>s;
        for(i=0;i<n;++i)
        {
            if(s[i]=='1')
            num++;
        }
        cout<<(num*(num+1))/2<<"\n";
    }
}