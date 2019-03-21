#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,k,i,val;
	cin >> t;
	while (t > 0) {
		cin >> n >> k;
		vector<int>vec;
		for (i = 0; i < n; i++) {
			cin >> val;
			vec.push_back(val);
		}
		sort(vec.begin(), vec.end());
		int flag = 1;
		for (i = 1; i < n-1; i++) {
			if (vec[i] != vec[i + 1]) {
				flag = 0;
			}
		}
		if (flag == 0) {
			flag = 1;
			for (i = 0; i < n - 2; i++) {
				if (vec[i] != vec[i + 1]) {
					flag = 0;
				}
			}
		}
		if (flag == 0) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
		t = t - 1;
	}
    return 0;
}
