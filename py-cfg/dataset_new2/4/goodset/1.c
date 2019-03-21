

#include <stdio.h>

int main ()
{
    int i,j,k,l,t,n;
    long long int r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d%d",&n,&k);
        n=n-k;
        r=1;

        for(j=1;j<=(k-1);j++)
        {

            r*=(n+j);
            r/=j;


        }
        printf("%lld\n",r);

    }
    return 0;
}
