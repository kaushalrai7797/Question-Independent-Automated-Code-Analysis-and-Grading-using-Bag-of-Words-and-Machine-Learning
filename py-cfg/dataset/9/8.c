#include<stdio.h>
int main()
{
    int k,n,b,q,val_k,sum=0,max=0;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d %d",&n,&b);
        max=0;
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

                printf("%d\n",max);
    }
    return 0;
}
