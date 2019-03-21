#include <stdio.h>
int diff(int x, int y){
    if(x>y){
        return x-y;
    }
    else{
        return y-x;
    }
}
int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int min = diff(a[0],a[1]);
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(diff(a[i],a[j]) < min){
                    min = diff(a[i],a[j]);
                }
            }
        }
        printf("%d\n", min);
    }
	// your code goes here
	return 0;
}
