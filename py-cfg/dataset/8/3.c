#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

pair<ll,ll>pa[102];
float a[102];
float ind(ll n)
{
    if(a[n]==0)
    {

        return .500000;
    }
    ll p=pa[n].first;
    ll p1=pa[n].second;
    float r=ind(p);float r1=ind(p1);
    float r2=1.0000/(2.0000*r*r1);
    //cout<<r2<<endl;
    r2=sqrt(r2)/2.00;
    if(a[n]==1)r2=1.00-r2;

    return r2;
}


int main()
{
    ll n,i,x,y,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        memset(pa,0,sizeof(pa));
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
            {
                cin>>x>>y;
                pa[i]={x,y};
            }
        }
        float ans=ind(n);
        printf("%.5f\n",ans);
    }

}
