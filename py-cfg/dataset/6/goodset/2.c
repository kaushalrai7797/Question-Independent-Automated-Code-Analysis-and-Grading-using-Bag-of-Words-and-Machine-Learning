#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t;
	cin >> t;
	while(t--){
	    long long int n, count, sum;
	    cin >> n;
	    string str;
	    cin >> str;
	    count = 0;
	    long long int i = 0;
	    for(i = 0; i < str.size(); i++){
	        if(str[i] == '1')
	        count++;
	    }
	    sum = (count*(count +1))/2;
	    cout << sum << endl;
	}
	return 0;
}
