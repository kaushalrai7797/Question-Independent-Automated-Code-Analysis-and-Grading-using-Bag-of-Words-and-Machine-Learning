#include <stdio.h>
#include <math.h>

int main() {
    int T, N, Q, D, X, i;
    double divisor;
    scanf("%d", &T);
    while (T--){
        scanf("%d %d", &N, &Q);
        divisor = 0;
        for (i = 0; i < N; i++){
            scanf("%d", &D);
            divisor += log(D);
        }
        for (i = 0; i < Q; i++){
            scanf("%d", &X);
            printf("%d%s", (int)floor(exp(log(X) - divisor)), (i == Q - 1) ? "\n" : " ");
        }

    }
    return 0;
}
