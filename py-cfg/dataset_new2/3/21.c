#include <stdio.h>

int main(void) {
	int n1;
	scanf("%d", &n1);
	int a[n1],i;
	long m=0, count =0;
	for(i=1;i<=n1;i++){
	    scanf("%d", &a[i]);
	}
	for(i =1;i<=n1;i++){
	    count = count+i;
	    m = m + a[i];
	}
	if(m == count){
	    printf("Yes");
	}
	else{
	    printf("No");
	}
	return 0;
}
