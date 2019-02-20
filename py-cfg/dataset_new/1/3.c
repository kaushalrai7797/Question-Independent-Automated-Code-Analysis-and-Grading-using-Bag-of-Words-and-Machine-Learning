#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k=0,j=1,i;
	    scanf("%d",&n);
	    int a[100];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    a[n]=0;
	    for( i=0;i<n;i++)
	    {
	            if(a[i]>a[i+1])
	            {
	            k=k+j*(j+1)/2;
	            j=0;
	            }
	            j++;
	        
	    }
	    printf("\n%d",k);
	    
	}
	return 0;
}

