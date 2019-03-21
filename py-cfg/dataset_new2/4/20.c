#include <stdio.h>
int main(void) {
	long long int n,k,i,,t,ans,j;
	scanf("%11d",&t);
	while(t--)
	{
	 scanf("%11d %11d",&n,&k);
	 k=n-k;
	 if(k<0||k>n)
	    ans=0;
	 else
	    {
	    ans=1;
	   for(i=1;i<=k;i++)
	    {
	        ans=((ans*(n-i+1))/i);
	    }

	    }
	    printf("%11d\n",ans);
	}

	return 0;
}
