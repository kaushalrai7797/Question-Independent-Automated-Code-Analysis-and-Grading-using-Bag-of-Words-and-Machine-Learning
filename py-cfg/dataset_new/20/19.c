#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d",&l);
        scanf("%d",&r);
        int i,ans;
        ans=0;
        for(i=l;i<=r;i++)
        {
            ans=i^ans;
           // printf("ans==%d\n",ans);
        }
        if(ans%2==0)
            printf("EVEN\n");
        else
            printf("ODD\n");
    }
    return 0;
}
