#include <stdio.h>

int main() {
    int t,n,i,fact;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        fact=1;
        while(n>1)
        {
            fact=fact*n;
            n--;
        }
        printf("%d\n",fact);
    }
	return 0;
}

