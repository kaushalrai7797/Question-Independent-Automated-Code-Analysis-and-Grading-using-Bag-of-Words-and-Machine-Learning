#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		if( n/10 == 0 ) cout << n << endl;
		else{
			cout << n - 8 << endl;
		}
	}
	return 0;
}