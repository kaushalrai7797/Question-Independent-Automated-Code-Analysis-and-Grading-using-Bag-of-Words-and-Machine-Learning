#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
#define MEM(a,b) memset((a),(b),sizeof(a))
const LL INF = 1e9 + 7;
const int N = 1e5 + 10;
LL check(LL n)
{
	LL o = 1;
	while (o * 10 <= n) o *= 10;
	LL ans = 0;
	while (n)
	{
		if (o > n)
		{
			o /= 10;
			continue;
		}
		int t = n / o;
		LL tot = n % o / t + 1;
		ans += tot;
		n -= tot * t;
	}
	return ans + 1;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int ncase;
	scanf("%d", &ncase);
	while (ncase--)
	{
		LL k;
		scanf("%lld", &k);
		LL l = 1, r = k * 10;
		LL key = r;
		while (l <= r)
		{
			LL mid = (l + r) >> 1;
			LL cost = check(mid);
			if (abs(cost - k) <= 100)
			{
				key = mid;
				break;
			}
			if (cost < k) l = mid + 1;
			else r = mid - 1;
		}
		LL L = max(1LL, key - 1000), R = key + 1000;
		LL ans = 0;
		for (LL i = L; i <= R; i++)
		{
			if (check(i) == k)
				ans = max(ans, i);
		}
		printf("%lld\n", ans);
	}
	return 0;
}