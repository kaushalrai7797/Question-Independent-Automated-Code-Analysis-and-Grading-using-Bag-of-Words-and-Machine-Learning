#include<stdio.h>

int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long long int l,r;
        scanf("%lld",&l);
        scanf("%lld",&r);
        long long int i,ans;
        if(l==r)
        {
            ans=l;
        }
        else
        {
        int s=r%4;
        if(s==1)
        r=1;
        else if(s==2)
        r=r+1;
        else if(s==3)
            r=0;
        else
            r=r;

        l=l-1;
        ans=l^r;}
        //printf("%lld",ans);



        if(ans%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}
