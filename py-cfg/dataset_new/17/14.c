#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    int c,d,l;
	    scanf("%d%d%d",&c,&d,&l);
	    if(l%4==0){
	        printf("yes\n");
	    }
	    else
	    printf("no\n");
	}
	return 0;
}

