#include <stdio.h>

int main(void) {
	int t, winner;
	int max = 0, p1=0,p2=0;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
	    int a, b;
	    scanf("%d %d", &a, &b);
	    p1=p1+a;
	    p2=p2+b;
	    if(p1-p2>max){
	        winner = 1;
	        max = p1-p2;
	    }
	    if(p2 - p1 > max){
	        winner = 2;
	        max=p2-p1;
	    }
	}
	printf("%d %d", winner, max);
	return 0;
}

