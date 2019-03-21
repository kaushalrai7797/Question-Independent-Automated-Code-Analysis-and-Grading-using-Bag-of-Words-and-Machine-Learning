#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int n=0;
	    scanf("%d",&n);
	    int j,a[n],min=0,k;
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    for(j=0;j<n;j++)
	    {
	        for(k=j+1;k<n;k++)
	        {
	            if((j==0)&&(k==1))
	            {
	                min=abs(a[j]-a[k]);
	            }
	            if(min>abs(a[j]-a[k]))
	            {
	                min=abs(a[j]-a[k]);
	            }
	        }
	    }
	    printf("%d\n",min);
	}
	return 0;
}
