#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    string str; cin>>str;
	    for(int i=0;i<str.length();i++){
	        if(str[i]=='1') c++;
	    }
	    str[n]='\0';
	    double ans=(c*(c+1))/2;
	    cout<<ans<<endl;
	}
	return 0;
}
