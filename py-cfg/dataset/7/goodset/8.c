#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A, B;
	cin >> A;
	cin>> B;
	
	int ans = A-B;
	if((ans+1)%10==0) ans--;
	else ans++;
	
	cout << ans;
	return 0;
}
