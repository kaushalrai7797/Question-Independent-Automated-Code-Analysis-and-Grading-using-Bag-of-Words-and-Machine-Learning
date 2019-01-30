// #pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
// #include<cmath>
// #include<cstdio>
// #include<cctype>
// #include<cstring>
// #include<iomanip>
// #include<iostream>
// #include<algorithm>
using namespace std;
#define BASE 131
#define eps 1e-9
#define Eps 1e-10
#define maxn 200010
#define ll long long
#define pb push_back
#define mod 1000000007
#define inf 2147483647
#define lb lower_bound
#define up upper_bound
#define rint register int
#define uint unsigned int
#define Mod 93911003811343LL
#define pir pair <int ,int >

#define fir first
#define sec second
#define LS(x) ((x)<<1)
#define RS(x) ((x)<<1|1)
#define lowbit(i) (i&-i)
#define MID(l,r) ((l)+(r)>>1)

const ll INF=4e18;
const ll inv2=(mod+1)>>1;
const double pi=acos(-1);

namespace Math{

	inline ll popcount(ll x){
		x = (x&0x55555555) + ((x>>1)&0x55555555);
		x = (x&0x33333333) + ((x>>2)&0x33333333);
		x = (x&0x0F0F0F0F) + ((x>>4)&0x0F0F0F0F);
		x = (x&0x00FF00FF) + ((x>>8)&0x00FF00FF);
		x = (x&0x0000FFFF) + ((x>>16)&0x0000FFFF);
		return x;
	}

	inline ll F(ll x,ll p){return x>=p?x-p:x;}
	inline ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
	inline ll ksm(ll x,ll t,ll p){
		ll res=1;while(t){
			if(t&1)res=1LL*res*x%p;
			x=1LL*x*x%p;t>>=1;
		}return res;
	}
	
}

using Math::F;
using Math::ksm;

template < typename tp > void read ( tp & dig ) {
	char ch=getchar();ll flag=0;dig=0;
	while(!isdigit(ch)){ if(ch=='-')flag=1;ch=getchar(); }
	while(isdigit(ch))dig=dig*10+ch-'0',ch=getchar();
	if(flag)dig=-dig;
}

template < typename tp , typename ...Args > void read ( tp & dig , Args & ...args ){
	read(dig);read(args...);
}

int T,n,m,a[110],b[110];

inline bool check(){
	if(n^m)return false;
	for(int i=1;i<=n;++i)
		if(a[i]^b[i])return false;
	return true;
}

int main()
{

	read(T);while(T--){
		read(n),read(m);
		for(int i=1;i<=n;++i)read(a[i]);
		for(int i=1;i<=m;++i)read(b[i]);
		sort(a+1,a+n+1,greater <int>());
		sort(b+1,b+m+1,greater <int>());
		while(!a[n]&&n)--n;
		while(!b[m]&&m)--m;
		if(check())printf("Bob\n");
		else printf("Alice\n");
	}return 0;

}