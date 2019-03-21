#include <stdio.h>
long long int fact(int X)
{
    long long int d;
    if(X==0)
    {
        return 1;
    }
    else
    {
        d=X*fact(X-1);
        return d;
    }
}
int main()
{
	// your code goes here
    int T,N,K,i;
    long long int ans;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N,&K);
        ans=fact(N+K-1)/(fact(N)*fact(K-1));
        printf("%lld\n",ans);
    }
	return 0;
}
