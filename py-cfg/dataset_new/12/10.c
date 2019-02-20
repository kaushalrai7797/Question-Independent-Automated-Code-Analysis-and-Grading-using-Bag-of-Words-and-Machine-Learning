#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        int count=0,i,j,n,arr[20],brr[20],a;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&brr[j]);
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<a;i++)
            {
                if(brr[j]==arr[i])
                {
                    count++;
                }
            }
        }
        if(count==n)
        {
            printf("Yes\n");
        }
        else
        {
            printf("no\n");
        }

    }
    return 0;

}
