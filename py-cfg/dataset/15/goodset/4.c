#include <stdio.h>
 
int main(void) {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int arr[n+1][3],i,count=0;  float val[n+1], r1=0.00, r2=1.00, res;
		for(i=1; i<=n; i++)
		{
			arr[i][0]=0;
			arr[i][1]=0;
			arr[i][2]=0;
			scanf("%d", &arr[i][0]);
			val[i]=0;
			if(arr[i][0]!=0)
			{
				scanf("%d %d", &arr[i][1], &arr[i][2]);
			}
		}
		while(val[n]!=0.50000)
		{
			count++;
			res= (r1+r2)/2;
			for(i=1; i<=n; i++)
			{
				if(arr[i][0]==0)
				val[i]=res;
				else
				{
					if(arr[i][0]==1)
					val[i]= val[arr[i][1]]+val[arr[i][2]]-(val[arr[i][1]]*val[arr[i][2]]);
					else
					val[i]= val[arr[i][1]]*val[arr[i][2]];
				}
			}
			if(val[n]<0.50000)
			r1=res;
			else
			r2=res;
			if(count>25)
			    break;
		}
		printf("%0.5f\n", res);
	}
	return 0;
} 