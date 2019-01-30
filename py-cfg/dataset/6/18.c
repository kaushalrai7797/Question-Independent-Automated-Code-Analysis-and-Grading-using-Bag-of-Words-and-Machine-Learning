#include<stdio.h>
//count k primes

int min(int a,int b)
{
	if(a>b)
		return b;
	return a;
}
int main()
{
	int arr[100001],i,j;
	for(i=0;i<=100001;i++)
	{
		arr[i]=i;
	}
	for(i=2;i*i<=100001;i++)
	{
		if(arr[i]==i)
		{
			for(j=i*i;j<=100001;j+=i)
			{
				arr[j]=min(i,arr[j]);
			}
		}
	}
	int ntest;
	scanf("%d",&ntest);	
	while(ntest--)	
	{
		int a,b,k;
		scanf("%d%d%d",&a,&b,&k);
		int count=0;
		for(i=a;i<=b;i++)
		{
			int key=0;
			j=i;
			while(j!=1)
			{	
				key++;
				while((j%arr[i])==0)
					j/=arr[i];
				i=j;
				if(key<=k)
					continue;
				else 
					break;
			}
			if(key==k)
				count++;
		}
		printf("%d\n",count);
	}
	
	return 0;
}