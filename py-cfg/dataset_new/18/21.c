#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for (k=0;k<t;k++)
    {
        int n,q,e,j,i;
        scanf("%d %d",&n,&q);
        int d[n];
        for (i=0;i<n;i++)
        {
            scanf("%d",&d[i]);
        }
        for (i=0;i<q;i++)
        {
            scanf("%d",&e);
            for (j=0;j<n;j++)
            {
                e=e/d[j];
                if (e==0)
                {
                    break;
                }
            }
            printf("%d ",e);
        }
        printf("\n");
    }
}