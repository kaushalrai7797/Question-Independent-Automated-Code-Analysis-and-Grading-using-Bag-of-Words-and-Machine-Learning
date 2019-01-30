#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXNUM 100000

void sieve(int* ar){
    unsigned long int i, j;
    for(i = 2; i <= MAXNUM; i++){
        if(ar[i-1] == 0){
            ar[i-1]++;
            j = 2;
            while(i*j <= MAXNUM){
                ar[i*j-1]++;
                j++;
            }
        }
    }
/*    for(i = 0; i < MAXNUM; i++){
        printf("%lu => %d\n", i+1, ar[i]);
    }*/
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
            if(ar[i-1] == k){
                count++;
            }
        }
        printf("%lu\n", count);
    }
    return 0;
}
