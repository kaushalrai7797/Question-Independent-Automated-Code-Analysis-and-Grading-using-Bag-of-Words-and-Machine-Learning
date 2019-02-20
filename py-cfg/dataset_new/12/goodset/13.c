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
	    if(n>=m)
	    {
	        for(i=0;i<m;i++)
	        {
	            for(j=0;j<n;j++)
	            {
	                if(b[i]==a[j])
	                {
	                    count++;
	                    break;
	                }
	            }
	            if(count!=(i+1))
	            {
	                printf("No\n");
	                break;
	            }
	        }
	        if(count==m)
	        {
	            printf("Yes\n");
	        }
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

