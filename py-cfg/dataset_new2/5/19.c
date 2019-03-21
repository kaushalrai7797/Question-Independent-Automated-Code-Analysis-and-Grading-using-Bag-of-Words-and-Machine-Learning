#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isPalin(int x) {
    int t = x,rev=0;

    while(t != 0)  {
        int r= t%10;
        t   /= 10;
        rev  = rev*10 + r;
    }

    if( rev == x){
        return 1;
    }
    else{
        return 0;
    }
}

int main () {
    unsigned long long int test;
    scanf("%llu", &test);
    for(unsigned long long int i = 0; i < test; i += 1){
        unsigned long long int k;
        scanf("%llu",&k);
        for(unsigned long long int j = 1;; j += 1){
            if(isPalin(k+j)==1){
                printf("%llu\n",k+j);
                break;
            }
        }
    }
}
