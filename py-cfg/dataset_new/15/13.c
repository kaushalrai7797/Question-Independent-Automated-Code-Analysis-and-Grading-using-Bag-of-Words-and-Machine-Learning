#include <stdio.h>

int main(void) {
    int T,ff,bf;
	long N,i;
    scanf(" %d", &T);
    if(T>=1 && T<=10){
        while(T--){
            scanf(" %ld", &N);
            if(N>=1 && N<=100000){
                ff = 1, bf = 1;
                long L[N],G[N];
                for(i=0; i < N; i++){
                    scanf(" %ld", &L[i]);
                }
                for(i=0; i < N; i++){
                    scanf(" %ld", &G[i]);
                }
                for(i=0; i < N; i++){
                    if(G[i] < L[i]){
                        ff = 0;
                        break;
                    }
                }
                for(i=0; i < N; i++){
                    if(G[N-i-1] < L[i]){
                        bf = 0;
                        break;
                    }
                }
                if(ff == 1 && bf == 1){
                    printf("both");
                }
                else if(ff == 1 && bf == 0){
                    printf("front");
                }
                else if(ff == 0 && bf == 1){
                    printf("back");
                }
                else
                    printf("none");
                printf("\n");
            }
        }
    }
	return 0;
}

