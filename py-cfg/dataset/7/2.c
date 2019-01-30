#include <stdio.h>
int main()
{
    int t,sum=0,time,rem,dig;
    long long int n,num;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        num=n;
        while(num!=0)
        {
            dig=num%10;
            num/=10;
            sum+=dig;
        }
        if(sum%9==0)
        time=0;
        else
        {
            rem=n%9;
            if(rem>5)
            time=9-rem;
            else
            time=rem;
        }
        printf("\n%d",time);
    }
}
