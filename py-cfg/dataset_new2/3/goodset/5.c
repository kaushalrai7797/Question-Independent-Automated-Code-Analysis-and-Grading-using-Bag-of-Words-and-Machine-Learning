#include <stdio.h>

int main(void) {
	long int n;
	long long int a[100000],s=0,s1=0;
	scanf("%ld",&n);
	for(long int i=0;i<n;i++)
	{
	    scanf("%lld",&a[i]);
	    s=s+a[i];
	}
	s1=(n*(n+1))/2;
	if(s==s1)
	printf("YES");
	else
	printf("NO");
	return 0;
}
