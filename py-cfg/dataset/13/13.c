#include <stdio.h>

int main(void) {
	int t, i, j, n;
	scanf("%d", &t);
	for(i = 0; i < t; i++)
	{
	    scanf("%d", &n);
	    char S[n];
	    int n1 = 0;
	    scanf("%s", S);
	    for(j = 0; j < n; j++)
	    {
	        if(S[j] == '1')
	            n1++;
	    }
	    if(n1 <=1 )
	        printf("%d\n",0);
	    else
	        printf("%d\n", n1 + (n1 * (n1 - 1) / 2));
	}
	return 0;
}

