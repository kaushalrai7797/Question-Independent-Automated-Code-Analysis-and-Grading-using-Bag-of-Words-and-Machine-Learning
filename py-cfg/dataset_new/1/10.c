#include <stdio.h>

int main() {
	int t;
	
	scanf("%d", &t);
	
	while(t--) {
		long long int n, i = 0, j = 1, ans = 0;
		
		scanf("%lld", &n);
		int a[n + 1];
		
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		
		a[n] = 0;
		for(i = 0; i < n; i++) {
			if(a[i] > a[i + 1]) {
				ans += j * (j + 1) / 2;
				j = 0;
			}
			j++;
		}
		printf("%lld\n", ans);
	}
}