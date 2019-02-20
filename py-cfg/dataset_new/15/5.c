#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
	    int c=0,c2=0;
	    scanf("%d",&n);
	    int l[n],g[n];
	    for(i=0;i<n;i++)
	    scanf("%d ",&l[i]);
	    for(i=0;i<n;i++)
	    scanf("%d ",&g[i]);
	    for(i=0;i<n;i++)
	    {
	    if(g[i]>=l[i])
	    c++;
	    if(g[n-i-1]>=l[i])
	    c2++;
	    }
	    if((c==n)&&(c2==n))
	    printf("both");
	    else if(c==n)
	    printf("front");
	    else if(c2==n)
	    printf("back");
	    else
	    printf("none");
	    printf("\n");
	    
	}
	return 0;
}

