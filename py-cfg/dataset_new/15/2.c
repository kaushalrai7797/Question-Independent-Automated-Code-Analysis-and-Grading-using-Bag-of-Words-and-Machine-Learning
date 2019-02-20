#include <stdio.h>
int main()
{
    int t,i,n;
    int x[100000],y[100000];
    scanf("%d",&t);
    while(t--)
    {
        int r=0,s=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&y[i]);
        }
        for(i=0;i<n;i++)
        {
            if(x[i]<=y[i])
                 r=r+1;
            if(x[i]<=y[n-1-i])
                s=s+1;
        }
        if(r==n&&s==n)
        printf("both\n");
        else if(s==n)
        printf("back\n");
        else if(r==n)
        printf("front\n");
        else if(r!=n&&s!=n)
        printf("none\n");
    }
}

