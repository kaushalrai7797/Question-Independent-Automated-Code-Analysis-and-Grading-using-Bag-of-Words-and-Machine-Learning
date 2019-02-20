#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    long long int n, q;
	    scanf("%lld %lld", &n, &q);
	    long long int di[n], qr[q], i, j, x;
	    for(i = 0; i < n; i++)
	    {
	        scanf("%lld ", &di[i]);
	    }
	    for(i = 0; i < q; i++)
	    {
	        scanf("%lld ", &qr[i]);
	    }
	    for(i = 0; i < q; i++)
	    {
	        x = qr[i];
	       for(j = 0; j < n; j++)
	       {
	            x = floor(( x / di[j]));
	       }
	       printf("%lld ", x);
	    }
	    printf("\n");
	}
	return 0;
}

