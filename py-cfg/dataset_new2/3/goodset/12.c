#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    long long int tol, val;
    int i=0, n;
    scanf("%d",&n);
    tol = 0;
    for(i=0;i<n;i++){
        scanf("%lld",&val);
        tol += val;
        tol -= (i+1);
    }
    if(tol == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
