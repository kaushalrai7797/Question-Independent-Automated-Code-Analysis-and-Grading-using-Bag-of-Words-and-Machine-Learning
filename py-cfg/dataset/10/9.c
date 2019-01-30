#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		ll ans;
		cin >> n;
		ans = n*(n + 1) / 2;
		int miss;
		cin >> miss;
		while (miss--)
		{
			ll value;
			cin >> value;
			ans -= value;
		}
		ll tore;
		cin >> tore;
		if (n % 2 == 1)
			n++;
		ll gen = n / 2;
		gen -= tore;
		ans *= gen;
		ans /= (double)(n / 2);
		printf("%0.4f",ans);
	}
	return 0;
}





