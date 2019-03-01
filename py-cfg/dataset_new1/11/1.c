#include <stdio.h>

int main(void) {
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,s,k;
        scanf("%d %d %d",&n,&k,&s);
        if(n<k)
        printf("-1\n");
        else{
        int ans=n/k;
        if(ans==1&s>=7)
        printf("-1\n");
        else
        printf("%d\n",((s/ans)+1));
        }
    }
	// your code goes here
	return 0;
}

