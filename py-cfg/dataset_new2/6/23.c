#include <stdio.h>
#include <stdlib.h>

int absl(int a){
	if(a < 0)
		return -1*a;
	return a;
}

int main(void){
	int t, k, n, i, a[15], flag;

	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &k);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);

		if(n == 2){
			printf("YES\n");
			continue;
		}

		i = 1;
		flag = 0;
		while(flag <= 1 && i < n){
			if(absl(a[i]-a[0])%(k+1) == 0)
				;
			else
				flag++;
			i++;
		}

		if(flag <= 1){
			printf("YES\n");
			continue;
		}

		i = 0;
		flag = 0;
		while(flag <= 1 && i < n){
			if(absl(a[i]-a[1])%(k+1) == 0)
				;
			else
				flag++;
			i++;
		}

		if(flag <= 1){
			printf("YES\n");
			continue;
		}

		printf("NO\n");
	}

	return 0;
}
