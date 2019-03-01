#include <stdio.h>
#include <stdlib.h>
#define MAX 100

double value = 1;

double factorial(double n) {
    if (n == 1) return 1;
    else value = n * factorial(n-1);
    return value;
}

int main(void) {
    int t,i,j;
    int *numbers;
    printf("enter:\n");
    scanf("%d",&t);
    if(t > MAX) {
        printf("%d\n",t);
    }
    numbers = (int *) malloc(t * sizeof(int));
    for(i=0;i<t;i++) {
        scanf("\n%d",&numbers[i]);
    }
    for(j=0;j<t;j++) {
        if (numbers[j] <= MAX) {
            printf("%.0f\n",factorial(numbers[j]));
        }else {
            continue;
        }
        value = 1;
    }
    return 0;
}
