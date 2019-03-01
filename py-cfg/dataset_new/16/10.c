#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int value = 1;

int factorial(int n) {
    if (n == 1) return 1;
    else value = n * factorial(n-1);
    return value;
}

int main(void) {
	 int t,i,j,*numbers;
    scanf("%d",&t);
    numbers = (int *) malloc(t * sizeof(int));
    for(i=0;i<t;i++) {
        scanf("%d",&numbers[i]);
    }
    for(j=0;j<t;j++) {
        printf("%d\n",factorial(numbers[j]));
        value = 1;
    }
	return 0;
}
