#include<stdio.h>
int main()
{
	int n,i,sum=0,sumofn;
	int c[100001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
		sum+=c[i];
	}
	sumofn=(n*(n+1))/2;
	if(sumofn==sum)
	printf("YES\n");
	else
	printf("NO\n");

}
