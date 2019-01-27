#include <stdio.h>

int main(void) {
	int t,i,r=0;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<t;i++)
	{
	    while(a[i]>0)
	    {
	        r=r*10;
	        r=r+a[i]%10;
	        a[i]=a[i]/10;
	    }
	    printf("%d\n",r);
	    r=0;
	}
	return 0;
}
