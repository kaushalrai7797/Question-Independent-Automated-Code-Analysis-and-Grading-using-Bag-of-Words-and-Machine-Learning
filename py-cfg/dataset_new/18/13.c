#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,q,i,j,division;
		scanf("%d%d",&n,&q);
		int array[n],query[q];
		
		for(i=0;i<n;i++)
		    scanf("%d",&array[i]);
		for(i=0;i<q;i++)
		    scanf("%d",&query[i]);
		
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
		    printf("%d ",division);
		}
    printf("\n");
	}
	return 0;
}