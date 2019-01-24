#include<stdio.h>



int main()
{
int t,i,n,k,d,y,a[10000],f=0;

scanf("%d",&t);
while(t--)
{
	scanf("%d %d",&n,&k);
	a[0]=0;
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<=n;i++)
	{
		d=a[i]-a[i-1];
		y=(d/k);
		f=f+y;
		if(d%k==0)
		f--;

	}
	printf("%d\n",f);
	f=0;
}
return 0;
}