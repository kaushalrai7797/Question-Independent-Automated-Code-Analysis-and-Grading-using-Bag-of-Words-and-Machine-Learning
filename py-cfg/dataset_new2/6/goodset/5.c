#include<stdio.h>
int main()
{
int t,n,k,a[100],i,r[11],rem,flag;
scanf("%d",&t);
while(t--)
{
	flag=0;
 for(i=0;i<11;i++)
	r[i]=0;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
	scanf("%d",&a[i]);
 for(i=0;i<n;i++)
{
	rem=a[i]%(k+1);
	r[rem]++;
 }
 for(i=0;i<11;i++)
{
	if(r[i]>=n-1)
	{
		flag=1;
		break;
	 }
	}
	if(flag==1)
	 printf("YES\n");
	else
	 printf("NO\n");
 }
 return 0;
}
 
