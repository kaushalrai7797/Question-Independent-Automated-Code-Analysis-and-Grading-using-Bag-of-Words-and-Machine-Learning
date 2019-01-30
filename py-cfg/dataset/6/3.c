#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, count, sum;
	    cin >> n;
	    string str;
	    cin >> str;
	    count = 0;
	    int i = 0;
	    while(str[i] != '\0'){
	        if(str[i] == '1')
	        count++;
	        i++;
	    }
	    sum = count*(count +1)/2;
	    cout << sum << endl;
	}
	return 0;
}
