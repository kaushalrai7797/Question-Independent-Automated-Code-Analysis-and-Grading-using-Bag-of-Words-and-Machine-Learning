#include<stdio.h>
int main()
{long long int i,j,t,n,temp,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
		{	temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
		}
		long long int min=a[1]-a[0];
		for(i=0;i<n-1;i++)
		{
			k=a[i+1]-a[i];
			if(k<min)
			min=k;
		}
		printf("%lld\n",min);
	}
}
