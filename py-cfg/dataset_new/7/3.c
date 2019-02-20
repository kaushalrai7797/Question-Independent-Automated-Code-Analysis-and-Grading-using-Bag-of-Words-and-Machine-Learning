#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        long int a, b, n;
        int c,d;
        int count;
        scanf("%lld %lld %lld", &a, &b, &n);
        count = 1;
        while(count <= n){
            if(count  <= n){
                a=a*2;
                count++;
            }
            if(count <= n){
                b =b * 2;
                count++;
            }
        }
        c = a>b?a:b;
        d = a<b?a:b;
        printf("%d\n", c/d);
    }
	return 0;
}

