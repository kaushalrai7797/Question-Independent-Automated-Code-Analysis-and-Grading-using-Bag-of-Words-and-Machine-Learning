#include <stdio.h>

long long nCr(int n,int r)
{
    int j;
    long long multy=1;
    if(r>n/2)
    {
        r=n-r;
    }
    for(j=n;j>n-r;j--)
    {
        multy *= j;
        multy /= n-j+1;
    }
    return multy;
}
int main()
{
	// your code goes here
    int T,N,K,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N,&K);
        printf("%lld\n",nCr(N-1,K-1));
    }
	return 0;
}
