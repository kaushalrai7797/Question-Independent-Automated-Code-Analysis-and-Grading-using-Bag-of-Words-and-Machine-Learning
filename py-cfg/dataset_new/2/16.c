#include<stdio.h>
int main(void)
{
    int t,n,m,i,j,c=0;
    scanf("%d",&t);
    while(t--)
    {
        //long int n,m;
        scanf("%d %d",&n,&m);
        //scanf("%ld",&m);
        int a[n],b[m];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                c++;
            }
        }
        printf("%d\n",c);
    }
}