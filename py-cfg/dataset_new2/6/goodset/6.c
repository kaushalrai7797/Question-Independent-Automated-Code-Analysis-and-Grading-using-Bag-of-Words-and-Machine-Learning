#include <stdio.h>

int main(void) {
	int T, tc;
	int i, j;
	int n, k;
	int has[11];
	scanf("%d", &T);
	while (T--){

		scanf("%d %d", &n, &k);
		for (i = 0; i<=10; i++)
			has[i] = 0;
		for (i = 0; i<n; i++){
			scanf("%d", &j);
			has[j % (k + 1)]++;
		}

		for (i = 0, j = 0; i<=10; i++)
		if (has[i] >= n - 1)
		{
			j = 1;
			printf("YES\n");
			break;
		}

		if (j == 0)
			printf("NO\n");
	}

	return 0;
}
