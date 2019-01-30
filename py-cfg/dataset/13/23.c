#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int n,result=0, count =0;
        scanf("%d",&n);
        char a[n];
        scanf("%s", &a);
        for(int i = 0;i<n;i++){
            if(a[i] == '1'){
                count++;
            }
        }
        result = (n*(n+1))/2;
        printf("%d\n", result);
    }
	return 0;
}

