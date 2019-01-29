#include<bits/stdc++.h>
#define ll long long int
#define pb(a) push_back(a)

using namespace std;
int main()
{	
	ll n;
	cin>>n;
	vector<ll> a;
	ll sum=0,temp,i;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a.pb(temp);
		sum+=temp;

	}

	sort(a.begin(),a.end());

	int q;
	cin>>q;
	while(q--)
	{	
		ll k,s=sum;
		cin>>k;
		for(i=0;i<k;i++)
		{
			s-=a[n-i-1];
		}

		cout<<s<<endl;
	}

return 0;

}