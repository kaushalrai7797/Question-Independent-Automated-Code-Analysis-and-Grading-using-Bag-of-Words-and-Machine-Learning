#include <stdio.h>
#include <stdlib.h>

int main()
{

        long int n, i, sum;
        scanf(" %ld",&n);
        long int a[n];
        sum=0;

        for(i=0;i<n;i++){
            scanf(" %ld",&a[i]);
            sum+=a[i];
        }
        if(sum==((n*(n+1))/2)){
        printf("%YES\n");
        }else{
        printf("NO\n");
        }

	return 0;
}
