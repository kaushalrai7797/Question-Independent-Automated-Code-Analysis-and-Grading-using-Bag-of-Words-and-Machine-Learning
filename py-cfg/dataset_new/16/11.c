#include <stdio.h>

int main() {
    int t,n,i,fact,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        fact=1;
        for(j=1;j<=n;j++)
        {
            fact=fact*i;
        }
        printf("%d",fact);
    }
	return 0;
}

