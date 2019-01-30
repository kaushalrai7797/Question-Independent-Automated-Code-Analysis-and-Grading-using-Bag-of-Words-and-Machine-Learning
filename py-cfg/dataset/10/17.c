#include<bits/stdc++.h>
using namespace std;


int main()
{
	int test,n,t,i,j,p;
	int pageSum[2001];
	int isAbsent[2001];
	double num,denom,sum;
	cin>>test;
	while(test--)
	{
		memset(isAbsent,0,2001*sizeof test);
		scanf("%d",&n);
		if(n&1)
		    p=(n+1)>>1;
		else p=n>>1;
		scanf("%d",&t);
		sum=0;
		for(i=0;i<t;i++)
		{
			scanf("%d",&j);
			isAbsent[j]=1;

		}
		scanf("%d",&t);
		for(i=1,j=1;i<=p;i++)
		{
			if(j<=n)
			    pageSum[i] = (isAbsent[j]?0:j);j++;
            if(j<=n)
                pageSum[i] += (isAbsent[j]?0:j);j++;
                
            sum+=pageSum[i];
		}
		sum *= ((p-t)/((double)p));
		sum=round(sum*1000)/1000;
		printf("%.4lf\n",sum);

	}
	return 0;	
}