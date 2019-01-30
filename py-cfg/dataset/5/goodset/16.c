#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool cmp(ll a,ll b){
	return (a > b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,sum_1=0,sum_2=0,val;
		cin>>n>>m;
		ll cnt1=n,cnt2=m;
		ll a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum_1+=a[i];
			if(a[i]==0)
				cnt1--;
		}
		for(int j=0;j<m;j++)
		{
			cin>>b[j];
			sum_2+=b[j];
			if(b[j]==0)
				cnt2--;
		}
		sort(a,a+n,cmp);
		sort(b,b+m,cmp);
		n=cnt1,m=cnt2;
		if(n!=m){
			if(sum_1 == sum_2 && sum_1 == 0){
				cout<<"Bob"<<endl;
			}
			else
				cout<<"Alice"<<endl;
		}
		else{
			if(sum_1 == sum_2){
				bool fl= false;
				for(int i=0;i<n;i++){
					if(a[i] != b[i]){
						fl= true;
						break;
					}
				}
				if(fl)
					cout<<"Alice"<<endl;
				else
					cout<<"Bob"<<endl;
			}
			else
				cout<<"Alice"<<endl;
		}

	}
}