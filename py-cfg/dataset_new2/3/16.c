#include<stdio.h>
#include<time.h>
#include<stdlib.h>




int main(){

/* clock_t start, end; */
/* double cpu_time_used; */
/* start = clock(); */

//START HERE

    long N, i;
    scanf("%ld", &N);
    long long int sum = 0;
    long long int sumation = (N*(N+1))/2;
    while(N-- || sum > sumation){
        scanf("%ld", &i);
        sum += i;
    }
    if(sum == sumation)
        printf("YES\n");
    else
        printf("NO\n");

//END HERE
/* end = clock(); */
/* cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; */
/* printf("Time Taken: %lf \n", cpu_time_used); */

return 0;}
