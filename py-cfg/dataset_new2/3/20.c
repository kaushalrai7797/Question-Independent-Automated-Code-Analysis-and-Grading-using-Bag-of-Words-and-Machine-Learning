#include <stdio.h>

int main(void) {
	int n1;
	scanf("%d", &n1);
	int a[n1],i,m=0, count =0;
	for(i=0;i<n1;i++){
	    scanf("%d", &a[i]);
	    m = m+a[i];
	}
	for(i =1;i<=n1;i++){
	    count = count+i;
	}
	if(m == count){
	    printf("Yes");
	}
	else{
	    printf("No");
	}
	return 0;
}
