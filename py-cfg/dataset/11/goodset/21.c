#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string foo, bar;
		cin >> foo >> bar;
		sort(foo.begin(), foo.end());
		sort(bar.begin(), bar.end());
		bool f = foo == bar;
		foo = foo.substr(0, unique(foo.begin(), foo.end()) - foo.begin());
		bar = bar.substr(0, unique(bar.begin(), bar.end()) - bar.begin());
		bool l = foo == bar;
		puts(f == l ? "YES" : "NO");
	}
	return 0;
}