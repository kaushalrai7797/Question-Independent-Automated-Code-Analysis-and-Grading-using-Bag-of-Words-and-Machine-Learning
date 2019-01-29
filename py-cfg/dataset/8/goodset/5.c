/* BISMILLAHIR RAHMANIR RAHIM */
#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define F first
#define S second
#define pb push_back

typedef long long ll;
typedef queue<int> qi;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;
typedef pair<ll, pii> piii;
typedef vector<pii> vii;

#define sc scanf
#define pf printf
#define sc1(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define scl1(x) scanf("%lld", &x)
#define scl2(x, y) scanf("%lld %lld", &x, &y)
#define scl3(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define pf1(x) printf("%d", x)
#define pf2(x, y) printf("%d %d", x, y)
#define pf3(x, y, z) printf("%d %d %d", x, y, z)
#define pfl1(x) printf("%lld", x)
#define pfl2(x, y) printf("%lld %lld", x, y)
#define pfl3(x, y, z) printf("%lld %lld %lld", x, y, z)
#define scs(x) scanf("%s", x)
#define pfs(x) printf("%s", x)
#define NL printf("\n")
#define FK printf(" ")
#define bug printf("ok :: ")

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define MEMV(a, n, x) for(int i = 0; i <= n; a[i] = x, i++)

#define For(a, b) for(int i = a; i <= b; i++)
#define seg_mid_L_R int mid = l + (r - l) / 2, lft = nd << 1, rgt = lft | 1

/* 6291469, 12582917, 402653189, 1610612741 */

#define READ freopen("INPUT.in", "r", stdin)
#define WRITE freopen("OUTPUT.out", "w", stdout)
#define read freopen("INPUT.txt", "r", stdin)
#define write freopen("OUTPUT.txt", "w", stdout)

#define inf 1e18
#define MOD 23102009
#define MX_N 1005
/*---------------------------------------------------------------------------------*/
ll n;
struct data {
    ll type;
    double p,q;
} ara[MX_N];
vector<ll>adj[MX_N];
void dfs(ll node,ll pr,double ans) {
    ll i;
    if(ara[node].type==0) {
        ara[node].p=ans;
        ara[node].q=1.0-ans;
        return;
    }
    double temp=1.0;
    for(i=0; i<adj[node].size(); i++) {
        ll v=adj[node][i];
        if(v==pr)continue;
        dfs(v,node,ans);
        if(ara[node].type==1) {
            temp*=ara[v].q;
        } else if(ara[node].type==2) {
            temp*=ara[v].p;
        }
    }
    if(ara[node].type==1) {
        ara[node].q=temp;
        ara[node].p=1.0-temp;
    } else if(ara[node].type==2) {
        ara[node].p=temp;
        ara[node].q=1.0-temp;
    }
}
bool check(double ans) {
    dfs(n,-1,ans);
    return (ara[n].p<=0.5);
}

int main() {
    FasterIO;
    ll t,x,y,i,op;
    cin>>t;
    while(t--) {
        cin>>n;
        for(i=0; i<=n; i++)adj[i].clear();
        for(i=1; i<=n; i++) {
            cin>>op;
            if(op==0) {
                ara[i].type=0;
            }
            if(op==1) {
                ara[i].type=1;
                cin>>x>>y;
                adj[i].pb(x);
                adj[i].pb(y);
            }
            if(op==2) {
                ara[i].type=2;
                cin>>x>>y;
                adj[i].pb(x);
                adj[i].pb(y);
            }
        }
        double lo=0.0,hi=1.0;
        double mid;
        for(i=0; i<200; i++) {
            mid=(lo+hi)/2.0;
            if(check(mid))lo=mid;
            else hi=mid;
        }
        cout<<setprecision(5)<<fixed<<mid<<endl;

    }
    return 0;
}
