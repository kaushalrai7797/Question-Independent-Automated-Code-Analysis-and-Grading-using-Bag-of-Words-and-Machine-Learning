#include <stdio.h>

int main(void) {
	// your code goes here
	int x,a,b,l,w=0;
	scanf("%d",&x);
	while(x--){
	    scanf("%d%d",&a,&b);
	    if(a>b&&l<a-b){l=a-b;
	    w=1;}
	    else if(b>a && l<b-a){l=b-a;w=0;}
	}
	if(w==1)
	printf("1 %d",l);
	else printf("2 %d",l);
	return 0;
}

