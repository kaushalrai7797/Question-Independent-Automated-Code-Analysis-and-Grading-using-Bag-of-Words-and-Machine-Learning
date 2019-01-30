#include "bits/stdc++.h"
using namespace std;

#define  F  first
#define  S  second
#define  pb push_back
#define  mp make_pair
typedef long long int ll;
const int N = 1e6+6;
int Arr[N][4],n;

double Ok( double x )
{
    double Hot[n+2];
    memset(Hot,0,sizeof Hot);
    for(int i=1; i<=n; i++)
    {
        int p = Arr[i][0];
        int a = Arr[i][1];
        int b = Arr[i][2];
        double s = Hot[a],t = Hot[b];
        if( !p )
            Hot[i] = x;
        else if( p==1 )
            Hot[i] = (s*(1-t)+t*(1-s)+s*t);
        else if( p==2 )
            Hot[i] = s*t;
    }
    return Hot[n];
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int tc;
    cin>>tc;
    while(tc--)
    {

        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            Arr[i][0] = x;
            if(x)
            {
                int a,b;
                cin>>a>>b;
                Arr[i][1] = a;
                Arr[i][2] = b;
            }
        }

        double lo = 0.0,hi = 1.0,mid;
        for(int i=1;i<=1000;i++)
        {
            mid = (lo+hi)/2.0;
            if( Ok(mid)>0.5 )
                hi=mid;
            else
                lo=mid;
        }

        cout<<fixed;
        cout<<setprecision(5);
        cout<<mid<< "\n";


    }













}
