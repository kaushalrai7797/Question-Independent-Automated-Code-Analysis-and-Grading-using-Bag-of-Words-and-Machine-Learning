#include <iostream>
using namespace std;
// INVIL  - Problem Code
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
		int n,k;
		cin>>n>>k;
		if(k==1&&n>1)
		cout<<"NO"<<endl;
		else if(k==1&&n==1)
		cout<<"YES\n"<<1<<endl;
		else if(n>k){
			int l=n-k;
			
			for(int i=l+1;i<=n;i++)
			cout<<i<<" ";
			for(int i=1;i<=l;i++)
			cout<<i<<" ";
			cout<<endl;
		}else{
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
			cout<<endl;
		}
	}
	
	return 0;
}