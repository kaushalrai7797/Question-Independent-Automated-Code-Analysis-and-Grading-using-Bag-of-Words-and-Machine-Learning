#include <stdio.h>

int main(void) {
	int i,t,n,k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&k);
	    int a[n];
	    for(i=0;i<n;i++){scanf("%d",&a[i]);}
	    int count=0;
	    for(i=0;i<n-1;i++){
	        if((a[i+1]-a[i])%(k+1)!=0){count++;}
	    }
	    if(count>1){printf("NO\n");}
	    else{printf("YES\n");}
	}
	return 0;
}
