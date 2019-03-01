#include <stdio.h>

int main()
{
    int T,i,j,n,count,temp,m;
    scanf("%d",&T);
    while( T-- )
    {
        scanf("%d",&n);
        int a1[n];
        for(i=0;i<n;i++)
            scanf("%d",&a1[i]);
        scanf("%d",&m);
        int a2[m];
        for(i=0;i<m;i++)
            scanf("%d",&a2[i]);
        count=0;
        temp=0;
        for(i=0;i<m;i++)
        {
            for(j=temp;j<n;j++)
            {
                if( a2[i] == a1[j] )
                {
                    ++count;
                    temp=j+1;
                    break;
                }
            }
        }
    if(  count == m )
        printf("Yes\n",j);
    else
        printf("No\n",j);
    }
    return 0;
}
