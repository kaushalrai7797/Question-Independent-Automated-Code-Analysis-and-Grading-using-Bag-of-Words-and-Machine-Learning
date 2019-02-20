#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,i,j,count=0;
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&n);
        int c[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&c[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                    if(c[i]==a[j])
                    {
                        count++;
                        break;
                    }
            }
 
        }
        if(count==n)
            printf("Yes\n");
        else
            printf("No\n");
    }
        return 0;
} 