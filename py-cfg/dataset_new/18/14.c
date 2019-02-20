#include <stdio.h>
#include <math.h>

int main() {
    int T, N, Q, D, X, i;
    long double divisor;
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
            if (X == 0)
                printf("%d%s", 0, (i == Q - 1) ? "\n" : " ");
            else
                printf("%d%s", (int)floor(exp(log(X) - divisor)), (i == Q - 1) ? "\n" : " ");
        }

    }
    return 0;
}
