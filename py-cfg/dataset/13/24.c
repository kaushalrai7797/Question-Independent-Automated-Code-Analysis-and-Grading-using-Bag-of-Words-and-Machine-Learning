#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t,i,b;
    long n,c;
    scanf("%d",&t);
    
    while(t--)
    {
    	c=0;
        scanf("%d",&n);
        char st[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&st[i]);
        }
        for(i=0;i<n;i++)
        {
            if(st[i]=='1')
            c=c+1;
        }
        b=c*(c+1)/2;
        printf("%d\n",c);
    }
	return 0;
}