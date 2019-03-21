#include<stdio.h>
int main() {
	unsigned long long int cases, i, n, k;
	unsigned long long int value = 1;
	scanf("%llu", &cases);
	while(cases-- > 0) {
		value = 1;
		scanf("%llu%llu", &n, &k);
		n--;
		k--;
		if(k > n/2)
			k = n - k;
		i = 1;
		while(i <= k){
			value = value * n / i;
		       	n--;
			i++;
		}
		printf("%llu\n", value);
	}
	return 0;
}
