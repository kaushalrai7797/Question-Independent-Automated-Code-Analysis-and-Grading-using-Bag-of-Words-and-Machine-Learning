#include <stdio.h>
int n,m,smin=0;
int A[40]={0};

void addmin(int l, int r)
{
    int mid;
    if(r==l+1)
    {
        if((A[l]==1)&&(A[r]==1))
        return;
        else if((A[l]==0)&&(A[r]==1))
        {
            A[l]=1;
            if(l==1)
            smin=smin+1;
            smin=smin+1;
        }
        else if((A[l]==1)&&(A[r]==0))
        {

            A[r]=1;
            if(r==n)
            smin=smin+1;
            smin=smin+1;
        }
        else if((A[l]==0)&&(A[r]==0))
        {
            //printf("n=%d ",n);
            A[l]=1; A[r]=1;
            if(l==1)
            smin=smin+1;
            if(r==n)
            smin=smin+r-l+1;
            else
            smin=smin+1;

            if(r==n)
            smin=smin+1;
            smin=smin+1;
        }
    }
    else
    {
        mid=(l+r)/2;
        A[mid]=1;
        if(l==1)
        smin=smin+mid-l+1;
        else
        smin=smin+mid-l;

        if(r==mid)
        smin=smin+mid-r+1;
        else
        smin=smin+mid-r;

        addmin(l, mid);
        addmin(mid, r);
        return;
    }
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,smax,ans;
	    scanf("%d %d",&n,&m);
	    //printf("n=%d ",n);
	    smax=(n*(n+1))/2+n;
	    addmin(1, n);

	   // for(i=0; i<=2; i++)
	    //printf("%d ",smin);

	    if(smin>m)
	    ans=-1;
	    else if(smax>=m)
	    ans=0;
	    else
	    ans=m-smax;
	    printf("%d\n",ans);
	}
	return 0;
}
