#include<bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pf push_front
#define lli long long int 
#define ll long long 
#define inf 1000000000000000000
#define mp make_pair
#define vc vector
#define pq priority_queue
#define pll pair<ll,ll> 
#define pls pair<ll,string>
#define psl pair<string,ll>
#define plc pair<ll,char>
#define pcl pair<char,ll>
#define pss pair<string,string>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define FOR1(i,a,b) for(int i = a; i<=b; i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    a=a-b;
    if((a%10)<9)
        cout<<a+1<<endl;
    else
        cout<<a-1<<endl;
    return 0;
}