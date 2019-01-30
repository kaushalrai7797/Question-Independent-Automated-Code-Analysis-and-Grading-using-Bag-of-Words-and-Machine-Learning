#include <stdio.h>
#include <string.h>
int main(void) {
	long long int t, i, j, n;
	scanf("%lld", &t);
	for(i = 0; i < t; i++)
	{
	    scanf("%lld\n", &n);
	    char c;
	    long long int n1 = 0;
	    for(j = 0; j < n; j++)
	    {
	        scanf("%c", &c);
	        if(c == '1')
	            n1++;
	    }
	    printf("%lld\n", (n1 * (n1 + 1) / 2));
	}
	return 0;
}

