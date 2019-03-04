#include <stdio.h>
#include <math.h>

int main(){
    int T, N, K, S;
    scanf("%d", &T);
    while (T--){
        scanf("%d %d %d", &N, &K, &S);
        if ((S > 6 && 7 * K > 6 * N) || K > N)
            printf("%d\n", -1);
        else
            printf("%lf\n", ceil((K * 1.0 * S) / N));
    }
    return 0;
}
