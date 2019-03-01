#include<stdio.h>

int main()
{
    long long n,m,i,index,ind,j,k,a,d,y,p;
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
            for(p=1;p<=y&&p<=j;p++)
            {
                if(y%p==0&&j%p==0)
                {
                    if(p==1)
                        index=p;
                }
            }
        }
        printf("%lld %lld\n",k/index,index);
    }

}

