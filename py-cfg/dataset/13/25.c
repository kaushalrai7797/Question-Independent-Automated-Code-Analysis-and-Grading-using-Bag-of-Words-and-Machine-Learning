#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t,i,j;
    scanf("%d",&t);
    
    while(t--)
    {
        int c=0,n;
        scanf("%d",&n);
        char st[n];
        gets(st);
        for(i=0;i<n;i++)
        {
        for(j=i;j<n;j++)
        {
            if(st[i]==st[j] && st[i]==1)
            c++;
        }
        }
        printf("%d\n",c);
    }
	return 0;
}

