#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	for(int z=0;z<t;z++)
	{
	    int n;
	    scanf("%i",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	      scanf("%i",&a[i]);
	    int p;
	    scanf("%i",&p);
	    int b[p];
	    for(int i=0;i<p;i++)
	      scanf("%i",&b[i]);
	    int te,temp=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==b[0])
	        {
	            te=i;
	            break;
	        }
	        else
	        {
	          te=n+2;
	        }
	    }
	    for(int i=0;i<p;i++)
	    {
	        if(a[i+te]!=b[i])
	          temp=5;
	    }
	    if(temp==5||te==n+2)
	      printf("No\n");
	    else
	      printf("Yes\n");
	}
	return 0;
}

