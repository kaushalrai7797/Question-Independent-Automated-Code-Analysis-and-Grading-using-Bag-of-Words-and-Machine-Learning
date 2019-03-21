#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t;
	scanf("%d",&t);
	int n,i,k,j;
	long long int ar[5000],min;
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    //min=0;
	    for(j=0;j<n;j++)
	    {
	        scanf("%lld",&ar[j]);
	    }
	    long long int min=abs(ar[0]-ar[1]);
	    for(j=0;j<n;j++)
        {
            for(k=(j+1);k<n;k++)
            {
                //printf("%lld\n",abs(ar[j]-ar[k]));
                if (min>abs(ar[j]-ar[k]))
                  min=abs(ar[j]-ar[k]);
            }
        }
	   printf("%lld\n",min);
	}
	return 0;
}
