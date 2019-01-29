#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	int A,B;
	cin >> A >> B;
	int diff = A-B;
	if((diff+1)%10 == 0) {
	    diff -= 1;
	}
	else {
	    diff += 1;
	}
	cout << diff << "\n";
	return 0;
}
