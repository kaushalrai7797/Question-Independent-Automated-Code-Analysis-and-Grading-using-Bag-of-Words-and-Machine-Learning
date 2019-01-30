#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("\n");
		int n,i,j;
		scanf("%d",&n);
		int input1[n+1],input2[n+1],temp[n+1],count=0;
		double r1=1.00,r2=0.00,res,val[n+1];
		for(i=1;i<=n;i++)
		{
			scanf("%d",&temp[i]);
			if(temp[i])
				scanf("%d%d",&input1[i],&input2[i]);
			val[i]=0;
		}
		while(val[n]!=0.5)
		{
			res=(r1+r2)/2.0;
			count++;
			for(j=1;j<=n;j++)
			{
				if(temp[j]==0)
					val[j]=res;
				else if(temp[j]==1)
					val[j]=val[input1[j]]+(1-val[input1[j]])*val[input2[j]];
					else if(temp[j]==2)
					val[j]=val[input1[j]]*val[input2[j]];
			}
			if(val[n]>0.5)
				r1=res;
			else if(val[n]<0.5)
				r2=res;
			if(count==30)
				break;
		}
		printf("%0.5lf\n",res);
	}
}