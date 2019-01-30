#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
	ll n;
	cin >> n;
	ll f;
	cin >> f;
	ld ans = 0;
	ll total = (n * (n + 1)) / 2;
	ll non_printed_page_no;
	ll sum_non_printed = 0;
	for (ll i = 0; i < f; i++) {
	    cin >> non_printed_page_no;
	    sum_non_printed += non_printed_page_no;
	}
	ll k;
	cin >> k;
	total -= sum_non_printed;
	n /= 2;
	ans = total - ((ld)k / n) * total;
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << ans << endl;
    }
}

