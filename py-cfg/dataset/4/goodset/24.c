#include <iostream>
#include <string>
using namespace std;

bool checkName(string a, string b, long long n){
	long long i = 0, j = 0;
	while (i < n && b[j] != '\0'){
		if (a[i] == b[j]){
			++i;
		}
		++j;
	}
	if (i == n){
		return true;
	}
	return false;
}

int main(){
	long long T, N1, N2;
	string M, W;
	cin >> T;
	while (T--){
		bool canMarry;
		cin >> M >> W;
		N1 = M.size();
		N2 = W.size();
		if (N1 < N2) canMarry = checkName(M, W, N1);
		else canMarry = checkName(W, M, N2);
		if (canMarry) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}