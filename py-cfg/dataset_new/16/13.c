#include <stdio.h>
int fac(int m);
int main() {
	// your code goes here
	int t,i,n;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    a[i]=fac(n);

	}
	for (i=0;i<t;i++)
	{
	    printf("%d\n",a[i]);
	}
	return 0;
}
int fac(m)
{
    if (m==0)
    return 1;
    else
    return m*fac(m-1);
}

