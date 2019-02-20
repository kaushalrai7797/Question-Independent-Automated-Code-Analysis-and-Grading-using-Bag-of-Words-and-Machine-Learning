#include <stdio.h>

void diff(int Si, int Ti, int* lead, int* win){
    if(Si>Ti){
        *lead=Si-Ti;
        *win=1;
    }
    else if(Ti>Si){
        *lead=Ti-Si;
        *win=2;
    }
}


int main(void) {
    int N=0;
	scanf("%d",&N);
	int winner[N];
	int val[N];
	int Si,Ti,L,W,lead,winners;
	for(int i=1; i=N+1; i++){
	    val[0]=0;
	    winner[0]=0;
	    scanf("%d",&Si);
	    scanf("%d",&Ti);
	    diff(Si,Ti,&lead,&winners);
	    val[i]=lead;
	    winner[i]=winners;
	    if(val[i]>val[i-1]){
	        L=val[i];
	        W=winner[i];
	    }
	}
	printf("%d",W);
	printf("%d",L);
	return 0;
}

