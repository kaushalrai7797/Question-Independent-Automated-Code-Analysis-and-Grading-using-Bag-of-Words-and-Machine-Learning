#include<bits/stdc++.h>
using namespace std;

long long k;
typedef long long ll;

int fun(long long m)
{
    ll ans=0;
  while(m){
    string s=to_string(m);
    ll d=s[0]-'0';
    string s1=s.substr(1,s.size()-1);
    ll rem=atoll(s1.c_str());
    ll temp=((rem/d)+1);
    m-=d*temp;
    ans+=temp;
  }
  return (ans+1<=k);
    
}


int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        
        cin>>k;
        
        long long l=1;
        
        long long h=10e18;
        
        long long ans=0;
        
        while(l<=h)
        {
            long long mid=(l+h)/2;
            
            if(fun(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        
        cout<<ans<<endl;
        
        
    }
}