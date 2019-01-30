#include <stdio.h>

int main() {
	int t,p,ans,m;
	scanf("%d",&t);
	while(t--)
	{
		int n,b,x=0;p=0;ans=0;m=0;
		scanf("%d %d",&n,&b);
		if(n-2*b-1<0)
		{
		//	printf("hello");
			while((n-x)!=b)
			x++;
			printf("%d\n",x);
		}
		else if(n-2*b-1>0)
		{
			x=b+1;
			n=n-(b+1);
			while(n>b&&n%b!=0)
			{
				x++;
				n--;
			}
			p=n/b;
			m=(p*b-n+x)/(b+1);
		//	printf("m=%d \n",m);
			ans=(x+m*b)*(p-m);
			printf("%d\n",ans);
		}
		else
		{
			printf("%d\n",b);
		}
	}
	return 0;
}
