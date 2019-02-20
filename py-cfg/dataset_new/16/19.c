#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	
	int a[n];
	
	for(int i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	}
	
	int fact(int a) {
	    int f=1;
	    for(int i=1;i<=a;i++) {
	        f=f*i;
	    }
	    return f;
	}
	
	for(int j=0;j<n;j++) {
	    printf("%d \n",fact(a[j]));
	}
	
	return 0;
}

