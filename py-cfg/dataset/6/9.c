#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXNUM 100000

void sieve(int* ar){
    unsigned long int i, j;
    for(i = 2; i < MAXNUM; i++){
        if(ar[i] == 0){
            ar[i]++;
            for(j = i+1; (i*j) < MAXNUM; j++){
                if(j%i == 0){
                    ar[j]++;
                }
            }
        }
    }
}

int main(void) {
    long unsigned int T;
    scanf("%lu", &T);
    int *ar = (int*)malloc(sizeof(int)*MAXNUM);
    memset(ar, 0, sizeof(int)*MAXNUM);
    sieve(ar);
    while(T--){
        unsigned long int a, b, k;
        unsigned long int i;
        unsigned long int count = 0;
        scanf("%lu%lu%lu", &a, &b, &k);
        for(i = a; i <= b; i++){
            if(ar[i] == k){
                count++;
            }
        }
        printf("%lu\n", count);
    }
    return 0;
}
