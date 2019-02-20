#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,m,a[100000],b[100000],i,j,count=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&m);
	    for(i=1;i<=n;i++)
	        scanf("%d",&a[i]);
	    for(i=1;i<=m;i++)
	        scanf("%d",&b[i]);
	    for(i=1;i<=n;i++)
	    {
	        for(j=1;j<=m;j++)
	        {
	            if(a[i]==b[j])
	            { count++;
	              break;
	            }
	        }
	    }
	    printf("%d\n",count);
	    count=0;
	}
	
	return 0;
}

