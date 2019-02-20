#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,c=0;
        scanf("%d %d",&m,&n);
        int a[m],b[n];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
            for(i=0;i<m;i++)
                for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
