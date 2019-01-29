#include <cstdio>
#include <cstring>
using namespace std;
typedef long long int ll;
int TC, N;
char str[200000];
int main() {
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d", &N);
		scanf("%s", str);
		ll ans = 0, sum = 0;
		for (int i = 0; i < N; i++) {
			if (str[i] == '1') {
				sum++;
				ans += sum;
			}
		}
		printf("%lld\n", ans);
	}
}
