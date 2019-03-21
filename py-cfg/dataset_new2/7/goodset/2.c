#include <stdio.h>
int lo=0;

void fun(int l, int r)
{
    int mid;
    if(l==r)
    {
        lo=lo+2;
        return;
    }
    else if(r==l+1)
    {
        lo=lo+r-l+2;
        lo=lo+2;
        return;
    }
    else
    {
        mid=(l+r)/2;
        lo=lo+r-l+2;
        fun(l, mid-1);
        fun(mid+1, r);
        return;
    }
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,hi,ans;
	    scanf("%d %d",&n,&m);
	    if(n==1)
	    {
	        lo=2;
	        hi=2;
	    }
	    else if(n==2)
	    {
	        lo=5;
	        hi=5;
	    }
	    else
	    {
	        lo=0;
	        fun(1, n);
	        //printf("lo=%d\n",lo);
	        hi=(n*(n+3))/2;
 	    }

 	    if(m<lo)
 	    ans=-1;
 	    else if(m>=lo&&m<=hi)
 	    ans=0;
 	    else
 	    ans=m-hi;
 	    printf("%d\n",ans);
	}
	return 0;
}
