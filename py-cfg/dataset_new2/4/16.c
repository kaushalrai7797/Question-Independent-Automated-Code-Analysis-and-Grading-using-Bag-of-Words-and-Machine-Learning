#include <stdio.h>

typedef long long ll;

ll func(int n, int k) {
    ll **arr;
    arr = (ll**)malloc((n+1)*sizeof(ll*));
    int i,j;
    for(i=0;i<=n;i++) {
        arr[i] = (ll*)malloc((k+1)*sizeof(ll));
    }
    for(i=1;i<=k;i++)   arr[0][i] = 0;
    for(i=1;i<=n;i++)   arr[i][0] = 0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=k;j++) {
            if (i==j)   arr[i][j] = 1;
            else if (i<j)   arr[i][j] = 0;
            else    arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
        }
    }
    return arr[n][k];
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n,k;
	    scanf("%d%d", &n,&k);
	    if (n==k)   printf("1\n");
	    else if (n<k)   printf("0\n");
	    else printf("%d\n", func(n,k));
	}
	return 0;
}
