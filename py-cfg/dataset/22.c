#include <stdio.h>

int main(void) {
    int n,i,t,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        rev=0;
        while(t!=0)
        {
        rev=rev*10+(t%10);
        t=t/10;
        }
        printf("%d\n",rev);
    }
	// your code goes here
	return 0;
}

