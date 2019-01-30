#include <stdio.h>
 
int main()
{
	int t;
	scanf("%d",&t);
 	while(t--)
 	{
 		int sum=0,total;
 		int F,a,tor,d=0;
 		float ans;
 		scanf("%d",&total);
 		sum=(total*(total+1))/2;
 		scanf("%d",&F);
 		while(F--)
 		{
 			scanf("%d",&a);
 			sum-=a;
 		}
 		scanf("%d",&tor);
 
 		((total%2==0)?(d=total/2):(d=(total+1)/2));
 		ans=sum-tor*(sum/d);
 		printf("%.4f\n",ans);
 	}
	return 0;
}