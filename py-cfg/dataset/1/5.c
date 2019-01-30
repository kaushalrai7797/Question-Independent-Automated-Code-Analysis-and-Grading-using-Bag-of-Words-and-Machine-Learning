#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
		int n,k;
		cin>>n>>k;
		if(k==1)
		cout<<"NO"<<endl;
		else if(n>k){
			cout<<"YES"<<endl;
			int l=n-k;
			for(int j=n,i=0;i<l;i++,j--)
			cout<<j<<" ";
			for(int i=1;i<=k;i++)
			cout<<i<<" ";
			cout<<endl;
		}else{
		    cout<<"YES"<<endl;
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
			cout<<endl;
		}
	}
	
	return 0;
}