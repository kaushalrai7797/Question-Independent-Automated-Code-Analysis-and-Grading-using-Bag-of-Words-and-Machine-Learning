#include<stdio.h>
unsigned long long int n,k,ans,res;
unsigned long long int bin(unsigned long long int n,unsigned long long int k)
{
res=1;
int i;
if(k>n-k)
	k=n-k;

for(i=0;i<k;++i)
	{
		res*=(n-i);
		res/=(i+1);
	}
    return res;
}

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	scanf("%llu %llu",&n,&k);
	n=n-1;
	k=k-1;
	ans=bin(n,k);
	printf("%llu\n",ans);
}
return 0;
}
