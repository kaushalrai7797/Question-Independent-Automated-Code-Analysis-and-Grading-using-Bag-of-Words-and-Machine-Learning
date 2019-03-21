#include<stdio.h>

int calc_minwastelen(int N){

	if (N == 1 || N == 0)
		return 0;

	if (N % 2 == 0)
		return N + 2 * calc_minwastelen(N / 2);
	else
		return	N + calc_minwastelen(N / 2) + calc_minwastelen(N / 2 + 1);
}
int main(){
	int tc, minlen = 0, maxlen = 0;
	int N, M;

	scanf("%d", &tc);

	while (tc--){

		scanf("%d%d", &N, &M);

		minlen = calc_minwastelen(N + 1);

		for (int i = N + 1; i >= 2; i--)
			maxlen += i;

		if (maxlen < M)
			printf("%d\n", M - maxlen);
		else if (minlen > M)
			printf("%d\n", -1);
		else
			printf("%d\n", 0);
	}

}
