#include <stdio.h>

int main(void) {
	int t, w;
	int d = 0, l=0,m=0;
	scanf("%d", &t);
	while(t--){
	    int a, b;
	    scanf("%d %d", &a, &b);
	    m=m+a;
	    l=l+b;
	    if(m-l>d){
	        w = 1;
	        d = m-l;
	    }
	    if(l - m > d){
	        w = 2;
	        d=l-m;
	    }
	}
	printf("%d %d", w, d);
	return 0;
}

