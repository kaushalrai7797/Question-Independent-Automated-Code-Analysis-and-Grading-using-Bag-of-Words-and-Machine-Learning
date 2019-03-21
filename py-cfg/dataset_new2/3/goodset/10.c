#include<stdio.h>
int main()
{
	long long int i,n,sum =0;
	scanf("%lld",&n);
	int arr[n];
	for(i=1; i<=n; i++)
	{
	scanf("%d",&arr[i]);
	sum = sum + arr[i];
	}
	if(n*(n+1)/2 == sum)
		printf("YES\n");
	else
		printf("NO\n");

return 0;
}
