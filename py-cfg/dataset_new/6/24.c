#include<stdio.h>
long long hcf(int a,int b);
int main()
{
    long long n,m,i,index,ind,j,k,a,d,y;
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld%lld%lld",&n,&a,&k);
        d=(360*n-720-2*a*n)/(n*(n-1));
        k=a+(k-1)*d;
        //printf("%lld ",k);
        for(j=1;j<=k;j++)
        {
            y=k/j;
            if(hcf(y,j)==1)
            {
               index=j;
               ind=y;

                break;
            }
        }
        printf("%lld %lld\n",ind,index);
    }

}
long long hcf(int z,int y)
{
    while(z!=y)
    {
        if(z> y)
            z -= y;
        else
            z -= y;
    }
    return z;
}
