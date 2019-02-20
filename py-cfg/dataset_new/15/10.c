#include <stdio.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	    int n,i,r=0,c=0;
	    scanf("%d",&n);
	    int l[n],g[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&l[i]);
	    }
	    printf("\n");
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&g[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(l[i]<=g[i])
	        {
	            c++;
	        }
	         if(l[n-i-1]<=g[i])
	        {
	            r++;
	        }
	        
	    }
	    if(c==n&&r!=n)
	    {
	        printf("front\n");
	    }
	    else if(r==n&&c!=n)
	    {
	         printf("back\n");
	    }
	    else if(c==n&&r==n)
	    {
	         printf("both\n");
	    }
	    else 
	    {
	         printf("none\n");
	    }
	    
	}
	return 0;
}
