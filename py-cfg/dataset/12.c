#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,h1=0,h2,count=0,x;
        scanf("%d%d",&n,&k);
        while(n--)
        {
            scanf("%d",&h2);
            x=h2-h1;
            if(x>k)
            {
                if(x%k==0)
                    count+=x/k-1;
                else
                    count+=x/k;
            }
            h1=h2;
        }
        printf("%d\n",count);
    }
    return 0;
}
