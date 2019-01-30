#include<stdio.h>
int main()
{
    int t,k,n,b,i,q,w,p,sum=0,max=0;
    scanf("%d",&t);
    while(t--)
    {scanf("%d %d",&n,&b);
        max=0;
        for(k=b;k<=n;k++)
        {
            if(k%b==0)
            {
                q = n-k;
                p = k;
            }
            sum = 0;
            while(p!=0)
            {
                sum = sum + q;
                p = p-b;
            }
            if(sum>max)
            {
                max = sum;
            }}
                printf("%d\n",max);
    }
    return 0;
} 