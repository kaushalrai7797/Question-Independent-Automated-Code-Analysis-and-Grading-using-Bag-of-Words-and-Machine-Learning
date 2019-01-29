#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define gsort(arr) sort(arr, arr+n, greater<ll>()); 
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sync2 cout<<fixed<<setprecision(10)
const ll inf=1e9+7;
// void whatthefuckamidoing()
// {
// }

int main()
{
     ll t,n,m;
     cin>>t;
     while(t--)
     {
          int n,m;
          cin>>n>>m;
          ll suma=0,sumb=0;
          vector <ll> a,b;
          for(ll i=0,x;i<n;i++)
          {
               cin>>x;
               a.pb(x);
               suma+=x;
          }
          for(ll i=0,x;i<m;i++)
          {
               cin>>x;
               b.pb(x);
               sumb+=x;
          }
          if(suma==sumb)
          {
               sort(a.rbegin(),a.rend());
               sort(b.rbegin(),b.rend());
               int flag=0;
               for(int i=0,j=0;i<m,j<n;i++,j++)
               {
                    if(a[i]!=b[i])
                         flag=1;
               }
               if(flag)
                    cout<<"Alice\n";
               else
                    cout<<"Bob\n";

          }
          else
               cout<<"Alice\n";
     }
}