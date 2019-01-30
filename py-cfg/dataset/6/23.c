#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    char *str=new char[n+1];
	    for(int i=0;i<n;i++){
	        cin>>str[i];
	        if(str[i]=='1') c++;
	    }
	    str[n]='\0';
	    double ans=c*(c+1)/2;
	    cout<<ans<<endl;
	}
	return 0;
}
