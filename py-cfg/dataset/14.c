#include <stdio.h>

int main() {
	// your code goes here
	int n,i,a[1000],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	    s=0;
	    while(a[i]!=0)
	    {
	        s=s*10+a[i]%10;
	        a[i]=a[i]/10;
	    }
	    printf("%d\n",s);
	}
	return 0;
}
