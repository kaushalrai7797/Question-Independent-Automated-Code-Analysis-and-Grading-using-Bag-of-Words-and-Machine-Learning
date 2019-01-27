#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        int n;
        scanf("%d", &n);
        int rem=0, newn=0;
        while(n != 0){
            rem = n%10;
            newn = (newn*10)+rem;
            n /= 10;
        }
        printf("%d\n", newn);
    }
	return 0;
}

