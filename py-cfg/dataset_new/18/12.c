#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,q,i,j,division;
		scanf("%lld%lld",&n,&q);
		long long array[n],query[q];
		
		for(i=0;i<n;i++)
		    scanf("%lld",&array[i]);
		for(i=0;i<q;i++)
		    scanf("%lld",&query[i]);
		
		for(i=0;i<q;i++)
		{
		    division=query[i];
		    j=0;
		    while(division && j<n)
		    {
		        if(array[j]==0)
		        {
		            j++;
		            continue;
		        }
		        division/=array[j];
		        j++;
		    }
		    printf("%lld ",division);
		}
    printf("\n");
	}
	return 0;
}