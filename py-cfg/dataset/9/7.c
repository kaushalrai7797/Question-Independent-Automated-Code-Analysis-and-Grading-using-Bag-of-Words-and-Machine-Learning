#include<stdio.h>
int main()
{
    long long int k,n,b,q,val_k,sum=0,max=0;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%lld %lld",&n,&b);
        max=0;
        if(n/2>b)
        {
            for(k=b;k<=n;k++)
        {
            if(k%b==0)
            {
                q = n-k;
                val_k = k;
                sum=0;
            while(val_k!=0)
            {
                sum = sum + q;
                val_k = val_k-b;
            }
            if(sum>max)
            {
                max = sum;
            }
            }
        }


        }
        else if(n<b*2)
        {
            max = n-b;
        }

                printf("%lld\n",max);
    }
    return 0;
}
