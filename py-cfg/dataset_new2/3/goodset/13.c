#include <stdio.h>

int main(void) {
	long long int n,i;
	scanf("%d",&n);
	long long int a[n],sum=0;
	for(i=0;i<n;i++)
	  {scanf("%lld",&a[i]);
	    sum+=a[i];}

	 if(((n*(n+1))/2)==sum)
	    printf("YES");
	    else
	    printf("NO");

	return 0;
}
