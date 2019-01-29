#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,f=0;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i]==1 && a[j]==1)
					f++;
			}
		}
		cout<<f<<endl;f=0;
	}
	return 0;
}