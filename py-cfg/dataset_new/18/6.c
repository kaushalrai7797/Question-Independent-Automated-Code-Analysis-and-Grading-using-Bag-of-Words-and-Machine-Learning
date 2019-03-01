#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	for(int z=0;z<t;z++)
	{
	    int n,q;
	    scanf("%i%i",&n,&q);
	    int d[n],x[q],f[q];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%i",&d[i]);
	        f[i]=1;
	    }
	    for(int i=0;i<q;i++)
	    {
	        scanf("%i",&x[i]);
	        f[i]=x[i]/d[0];
	        for(int j=1;j<n;j++)
	          f[i]=f[i]/d[j];
	        printf("%i ",f[i]);
	    }
	    printf("\n");
	}
	return 0;
}

