#include<iostream>
using namespace std;

int main()
{
	int t,n,k;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;
		
		if((k>n) || (k==1 && n>1))
			cout<<"NO"<<endl;

		else
		{
			cout<<"YES"<<endl;
			for (int i = n-k+1; i <= n; ++i)
				cout<<i<<" ";

			for (int i = n-k; i >=1; i--)
				cout<<i<<" ";
		}
			cout<<endl;
	}
return 0;	
}