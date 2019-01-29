#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool solve(string s1,string s2,int l1,int l2){
    int i=0,count=0;
    for(int j=0;j<=l2;j++){
        if(i>=l1){
            break;
        }
        if(s1[i]==s2[j]){
            i++;
            count++;
        }
    }
    
    return count==l1;
}
int main() {
	string s1,s2;
	int t,l1,l2;
	cin >> t;
	do{
	    cin >> s1 >> s2;
	    l1=s1.length();
	    l2=s2.length();
	    
	    if(l1>l2){
	        if(solve(s2,s1,l2,l1)){
	            cout << "YES";
	        }
	        else{
	            cout << "NO";
	        }
	    }
	    else{
	        if(solve(s1,s2,l1,l2))
	        cout << "YES";
	        else
	        cout << "NO";
	    }
	    
	    cout << '\n';
	    
	}while(--t);
	return 0;
}
