#include<bits/stdc++.h> 

using namespace std; 

bool compatibility(string s1,string s2){

	if(s1.length()>s2.length())swap(s1,s2);

	int i,j,n,m;

	i=j=0;

	n=s1.length();

	m=s2.length();

	while(true){

		if(i==n)return 1;

		if(j==m)return 0;

		if(s1[i]==s2[j]){

			i++;

			j++;
		}

		else{

			j++;
		}
	}

	return 0;
}

void solve(){

	int t;

	string s1,s2;

	cin>>t;

	while(t--){

		cin>>s1>>s2;

		if(compatibility(s1,s2))cout<<"YES\n";

		else cout<<"NO\n";
	}

}

int main(){

	/*#ifndef ONLINE_JUDGE
            freopen("input.txt", "rt", stdin);
            freopen("output.txt", "wt", stdout);
    #endif*/

	ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    solve();

	return 0;

}