#include <cstdio>
#include <cstring>
using namespace std;

int TC, N;
char str[200000];
int main() {
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d", &N);
		scanf("%s", str);
		int ans = 0, sum = 0;
		for (int i = 0; i < N; i++) {
			if (str[i] == '1') {
				sum++;
				ans += sum;
			}
		}
		printf("%d\n", ans);
	}
}
