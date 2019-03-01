#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,m,i,a[10001],j,b[10001];

    scanf("%d",&t);

    while(t--)
    {
        int count = 0,flag = 0;

        scanf("%d%d",&n,&m);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(i=0;i<m;i++)
            scanf("%d",&b[i]);

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    flag = 1;
                    count++;
                }
            }
        }

        if(flag==0)
            printf("0\n");

        else
            printf("%d\n",count);
    }
}
