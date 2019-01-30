

#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,i,p=0;
		scanf("%d",&n);
		char a[n];
		scanf("%s",a);
		for(i=0;i<n;i++)
		{
			if(a[i]=='1')
			p++;
		}
		
		printf("%d \n",p*(p+1)/2);
		
		
		
		
		
		
		
	}
	return 0;
}