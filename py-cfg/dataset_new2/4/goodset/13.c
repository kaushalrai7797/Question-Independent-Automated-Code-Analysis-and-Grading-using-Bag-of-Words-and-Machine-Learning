#include <stdio.h>
#include <stdlib.h>

long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
void fun() {
    long long n, k, ans;
    scanf("%lld%lld", &n, &k);
    ans = C(n-1, k-1);
    printf("%lld\n", ans);
}

int main() {
    int cases;
    scanf("%d", &cases);
    while(cases--) {
        fun();
    }
}
