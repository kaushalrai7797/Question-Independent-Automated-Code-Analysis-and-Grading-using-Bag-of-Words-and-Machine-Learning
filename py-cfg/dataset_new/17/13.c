#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int c,d,l;
	    scanf("%d%d%d",&c,&d,&l);
	    if(l==4||l==8) {
	        printf("yes\n");
	    }
	    else
	    printf("no\n");
	}
	return 0;
}

