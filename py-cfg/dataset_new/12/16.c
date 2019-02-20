#include <stdio.h>

int main() 
{
	int t,n,i,m,j;
	scanf("%d\n",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n],count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    scanf("%d",&m);
	    int b[m];
	    for(i=0;i<m;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==b[0])
	        {
	            for(j=i;(j-i)<m;j++)
	            {
	                if(a[j]==b[j-i])
	                {
	                    count++;
	                }
	                else
	                {
	                    count=0;
	                    break;
	                }
	            }
	            if(count==m)
	            {
	                printf("Yes\n");
	                break;
	            }
	        }
	    }
	    if(count!=m)
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

