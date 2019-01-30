#include <bits/stdc++.h>


using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vl; 

#define debug1(x)		  cout<<x<<endl
#define debug2(x,y)       cout<<x<<"   "<<y<<endl
#define debug3(x,y,z)     cout<<x<<"   "<<y<<"   "<<z<<endl
#define debug4(x,y,z,xy)  cout<<x<<"   "<<y<<"   "<<z<<"   "<<xy<<endl
#define tc int t; cin>>t; while(t--)
#define FOR(ii,jj,nn) for(int ii=jj;ii<nn;ii++)
#define ALL(x) (x).begin(),(x).end()
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld%lld",&x,&y)
#define slll(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define pl(x) printf("%lld\n",x)
#define mp(x,y) make_pair(x,y)
#define CLEAR(a) memset(a,0,sizeof(a))
#define pb(x) push_back(x)
#define ff first
#define ss second  
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define sii(x,y) scanf("%d%d",&x,&y)
#define siii(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define mod (int)1000000007
#define inf (int)1e6+5
#define lim (int)1e6+5

ll M= (ll)1e9+7;
vector<int> v1,v2;

int main(){
	int t;
	cin>>t;
	int n,m;
	while(t-->0){
		cin>>n>>m;
		vector<int> v1,v2;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x>0) v1.pb(x);

		}
		for(int i=1;i<=m;i++){
			int x;
			cin>>x;
			if(x>0) v2.pb(x);
		}
		if(v1.size()==v2.size()){
				sort(ALL(v1));
				sort(ALL(v2));
				bool b=0;
				for(int i=0;i<v1.size();i++){
					if(v1[i]!=v2[i]) b=1;
				}
				if(b) cout<<"Alice"<<endl;
				else cout<<"Bob"<<endl;
		}else {
			cout<<"Alice"<<endl;
		}

	}

	
	
} 