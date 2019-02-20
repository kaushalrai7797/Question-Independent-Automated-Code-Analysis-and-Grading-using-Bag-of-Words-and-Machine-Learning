#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int a, b, n,c,d;
        int count;
        scanf("%d %d %d", &a, &b, &n);
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

