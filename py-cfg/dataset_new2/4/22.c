#include <stdio.h>
#include <stdlib.h>

int C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    int ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
void fun() {
    int n, k, ans;
    scanf("%d%d", &n, &k);
    ans = C(n-1, k-1);
    printf("%d\n", ans);
}

int main() {
    int cases;
    scanf("%d", &cases);
    while(cases--) {
        fun();
    }
}
